#include "main.h"
#include <string.h>
#include <stdio.h>
#define CON_LEN 11

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, j = 0, char_printed = 0;
	Conversion con[] = {
		{"c", handle_c},
		{"s", handle_s},
	};

	va_start(arg, format);
		if (format)
			while (*format)
			{
				j = 0;
				if (*format != '%')
				{
					write(1, format, 1);
					char_printed++;
				}
				else
				{
					while (j < CON_LEN && (*(format + 1)) != *con[j].format)
						j++;

					if (j < CON_LEN)
					{
						char_printed += con[j].f(arg);
						format++;
					}
				}
				format++;
				i++;
			}
	va_end(arg);
	return (char_printed);
}

/**
 * handle_c - write a character
 * @val: va_list
 *
 * Return: 1
 */

int handle_c(va_list val)
{
	char c;

	c = va_arg(val, int);
	write(1, &c, 1);

	return (1);
}

/**
 * handle_s - write a string
 * @val: va_list
 *
 * Return: string length
 */

int handle_s(va_list val)
{
	char *str;
	int len;

	str = va_arg(val, char *);

	if (str)
	{
		len = strlen(str);
		write(1, str, len);
	}

	return (len);
}

