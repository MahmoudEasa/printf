#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * handle_p - print value of pointer
 * @val: va_list
 * @flags: string
 * Return: return length
*/
int handle_p(va_list val, char *flags)
{
	void *p = va_arg(val, void *);
	char str[30];
	int len = 0;
	(void)flags;

	sprintf(str, "%p", p);
	len += write(1, str, strlen(str));
	return (len);
}
