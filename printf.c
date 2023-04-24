#include "main.h"
#include <string.h>
#include <stdio.h>
#define CON_LEN 5

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
		{"d", handle_d},
		{"i", handle_i},
		{"b", handle_b},
		{"u", handle_u},
	};

	va_start(arg, format);
		if (format)
			char_printed = print_buffer(format, con, arg);
		else
			return (-1);
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
	char flags[10];
	int char_printed = 0, move;

	while (*format)
	{
		if (*format != '%')
			_write(format, &char_printed);
		else
		{
			if (*(format + 1) == 't')
			{
				format += 2;
				continue;
			}
			if (*(format + 1) == '#')
			{
				_write(format++, &char_printed);
				while (*(format + 1) == '#')
					format++;
				if (*(format + 1) == '%')
					format += 2;
				continue;
			}
			if (*(format + 1) == '%')
			{
				_write((format + 1), &char_printed);
				format += 2;
				continue;
			}
			else
			{
				move = handle_flags(format, flags);
				format += handel_fun(format, con, CON_LEN,
						&char_printed, _write, arg, flags, move);
			}
		}
		format++;
	}
	return (char_printed);
}

/**
 * _write - write character
 * @format: string
 * @n: character printed
 */

void _write(const char *format, int *n)
{
	write(1, format, 1);
	*n += 1;
}

/**
 * handle_c - write a character
 * @val: va_list
 * @flags: string
 *
 * Return: 1
 */

int handle_c(va_list val, char *flags)
{
	char c;
	(void)flags;

	c = va_arg(val, int);
	write(1, &c, 1);

	return (1);
}

/**
 * handle_s - write a string
 * @val: va_list
 * @flags: string
 *
 * Return: string length
 */

int handle_s(va_list val, char *flags)
{
	char *str;
	int len;
	(void)flags;

	str = va_arg(val, char *);

	if (str)
	{
		len = strlen(str);
		write(1, str, len);
	}

	return (len);
}

