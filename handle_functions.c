#include "main.h"

/**
 * handel_fun - handle flags and convertions
 * @format: striing
 * @con: struct
 * @CON_LEN: struct length
 * @char_printed: pointer to int
 * @_write: pointer to function
 * @arg: va_list
 *
 * Return: 1 if want to move the pointer or 0
 */

int handel_fun(const char *format, Conversion *con, int CON_LEN,
	int *char_printed, void (*_write)(const char *, int *), va_list arg)
{
	int j = 0;

	while (j < CON_LEN && (*(format + 1)) != *con[j].format)
	{
		j++;
	}
	if (j < CON_LEN)
	{
		*char_printed += con[j].f(arg);
		return (1);
	}
	else
		_write(format, char_printed);

	return (0);
}

