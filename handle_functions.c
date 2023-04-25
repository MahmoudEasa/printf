#include "main.h"
#include <string.h>

/**
 * handel_fun - handle flags and convertions
 * @format: string
 * @con: struct
 * @CON_LEN: struct length
 * @char_printed: pointer to int
 * @_write: pointer to function
 * @arg: va_list
 * @flags: string
 * @move: number to move pointer
 *
 * Return: 1 if want to move the pointer or 0
 */

int handel_fun(const char *format, Conversion *con, int CON_LEN,
	int *char_printed, void (*_write)(const char *, int *),
	va_list arg, char *flags, int move)
{
	int j = 0;

	while (j < CON_LEN && (*(format + (move + 1))) != *con[j].format)
		j++;
	if (j < CON_LEN)
	{
		*char_printed += con[j].f(arg, flags);
		return ((move + 1));
	}
	else
		for (j = 0; j <= move; j++)
		{
			if (*(format + j) != '0')
				_write((format + j), char_printed);
		}
	return (move);
}

/**
 * get_flags - handle flags
 * @format: string
 * @flags: string
 *
 * Return: number to move pointer
 */

int get_flags(const char *format, char *flags)
{
	char *flags_handle = "+- lh.0123456789";
	int i = 0, c = 1, j = 0, move_p = 0, f_len = strlen(flags_handle);

	while (*(format + c))
	{
		j = 0;
		while (j < f_len)
		{
			if (*(format + c) == flags_handle[j])
			{
				flags[i] = *(format + c);
				i++;
				break;
			}
			j++;
		}
		flags[i] = '\0';
		if (j == f_len)
			break;
		move_p++;
		c++;
	}

	return (move_p);
}
