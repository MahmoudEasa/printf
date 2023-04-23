#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * handle_d - write a decimal (base 10) number
 * @val: va_list
 *
 * Return: string length
 */

int handle_d(va_list val)
{
	int num, len = 0;
	char str[20];

	num = va_arg(val, int);
	sprintf(str, "%d", num);
	len = strlen(str);

	write(1, str, len);

	return (len);
}

/**
 * handle_i - write an integer
 * @val: va_list
 *
 * Return: string length
 */

int handle_i(va_list val)
{
	int num, len = 0;
	char str[20];

	num = va_arg(val, int);
	sprintf(str, "%d", num);
	len = strlen(str);

	write(1, str, len);

	return (len);
}

