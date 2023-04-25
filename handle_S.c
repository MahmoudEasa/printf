#include <stdio.h>
#include "main.h"
#include <limits.h>
#include <string.h>
#include <stdlib.h>

/**
 * handle_S - print string
 * @val: va_list
 * @flags: string
 * Return: return length
*/

int handle_S(va_list val, char *flags)
{
	char *str;
	char *ch = NULL;
	int len;
	(void)flags;

	str = va_arg(val, char *);

	if (str)
	{
		len = strlen(str);
	}
	sprintf(ch, "%S", str);
	write(1, str, len);
	return (len);
}

