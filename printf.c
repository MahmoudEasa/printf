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
	int char_printed;
	Conversion con[] = {
		{"c", handle_c},
		{"s", handle_s},
	};

	va_start(arg, format);
		if (format)
			char_printed = print_buffer(format, con, arg);
	va_end(arg);
	return (char_printed);
}

/**
 * print_buffer - print puffer
 * @format: string
 * @con: strunct
 * @arg: va_list
 *
 * Return: string length
 */

int print_buffer(const char *format, Conversion *con, va_list arg)
{
	int j, char_printed = 0;

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
			if (*format == '%' && *(format + 1) == '%')
			{
				write(1, (format + 1), 1);
				char_printed++;
				format += 2;
				continue;
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
		}
		format++;
	}
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

