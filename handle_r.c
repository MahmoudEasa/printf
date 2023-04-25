#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * handle_r - reverse string
 * @val: va_list
 * @flags: string
 * Return: return length
*/

int handle_r(va_list val, char *flags)
{
	char *str = va_arg(val, char *);
	int len = 0, i;
	char rev;
	(void)flags;

	if (str == NULL)
		str = ")Null(";

	for (i = 0 ; str[i] ; i++);
	
	for (i = i - 1 ; i >= 0 ; i--)
	{
		rev = str[i];

		write(1, &rev, 1);
		len++;
	}
	return (len);
}
