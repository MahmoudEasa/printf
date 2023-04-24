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
	unsigned int num, len = 0;
	char str[1024];

	num = va_arg(val, unsigned int);
	sprintf(str, "%u", num);
	write(1, str, strlen(str));
}
