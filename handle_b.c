#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * handle_b - write a binary
 * @val: va_list
 *
 * Return: length
 */

int handle_b(va_list val)
{
	unsigned int num, len = 0, i, num_h;
	char binary[33];

	num = va_arg(val, unsigned int);
	num_h = num;

	while (num_h > 0)
	{
		len++;
		num_h /= 2;
	}

	i = len - 1;
	binary[len] = '\0';

	while (num > 0)
	{
		binary[i] = (num % 2) + '0';
		num /= 2;
		i--;
	}
	write(1, binary, len);
	return (len);
}

