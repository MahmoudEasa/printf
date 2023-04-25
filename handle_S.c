#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * handle_S - print string
 * @val: va_list
 * @flags: string
 * Return: return length
*/

int handle_S(va_list val, char *flags)
{
	char *str = va_arg(val, char *);
	int len = 0;
	char ch[2];
	(void)flags;

	while (*str != '\0')
	{
		if (*str < 32 || *str >= 127)
		{
			len += write(1, "\\x", 2);
			sprintf(ch, "%02X", *str);
			len += write(1, ch, 2);
		}
		else
			len += write(1, str, 1);
		str++;
	}
	return (len);
}

