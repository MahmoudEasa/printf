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
	int num;

	num = va_arg(val, int);
	write(1, &num, sizeof(int));

	return (1);
}

/**
 * handle_i - write an integer
 * @val: va_list
 *
 * Return: string length
 */

int handle_i(va_list val)
{
	int num;

	num = va_arg(val, int);
	write(1, &num, sizeof(int));

	return (1);
}

