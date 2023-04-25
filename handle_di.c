#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * handle_d - write a decimal (base 10) number
 * @val: va_list
 * @flags: strign
 *
 * Return: string length
 */

int handle_d(va_list val, char *flags)
{
	long int num, len = 0;
	char str[20];
	(void)flags;

	num = va_arg(val, long int);
	if (*flags == 'l')
		sprintf(str, "%ld", num);
	else if (*flags == 'h')
		sprintf(str, "%hd", num);
	else
		sprintf(str, "%d", num);
	len = strlen(str);

	write(1, str, len);
	return (len);
}

/**
 * handle_i - write an integer
 * @val: va_list
 * @flags: string
 *
 * Return: string length
 */

int handle_i(va_list val, char *flags)
{
	long int num, len = 0;
	char str[20];
	(void)flags;

	num = va_arg(val, long int);
	if (*flags == 'l')
		sprintf(str, "%li", num);
	else if (*flags == 'h')
		sprintf(str, "%hi", num);
	else
		sprintf(str, "%i", num);
	len = strlen(str);

	write(1, str, len);
	return (len);
}

