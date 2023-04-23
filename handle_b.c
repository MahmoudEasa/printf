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
	int num, i, len = 0;
	char binary[33];
	binary[32] = '\0';

	num = va_arg(val, int);

	for (i = num; i >= 0; i--)
	{
		binary[i] = (num & '1') ? '1' : '0';
		num >>= 1;
	}
	len = strlen(binary);

	write(1, binary, len);
	return (len);
}

