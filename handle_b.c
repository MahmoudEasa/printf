#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * handle_b - write a binary
 * @val: va_list
 * @flags: string
 *
 * Return: length
 */

int handle_b(va_list val, char *flags)
{
	unsigned int num, len = 0, i, num_h;
	char binary[33];
	(void)flags;

	num = va_arg(val, unsigned int);
	num_h = num;

	if (num == 0)
	{
		sprintf(binary, "%u", num);
		write(1, binary, strlen(binary));
		return (1);
	}

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

