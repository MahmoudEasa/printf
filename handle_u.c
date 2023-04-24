#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * handle_u - print the unsigned integer value
 * @val: va_list
 * Return: return length
*/

int handle_u(va_list val)
{
	unsigned int n, len = 0;
	char str[];

	n = va_arg(val, unsigned int);
	if (n >= 0)
	{
		sprintf(str, "%d", n);
		len = strlen(str);
		write(1, str, len);
		return (len);
	}
	else
		return (-1);
}
