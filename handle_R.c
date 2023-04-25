#include "main.h"
#include <stdio.h>

/**
 * handle_R - prints the rot13'ed string
 * @val: va_list
 * @flags: string
 * Return: return length
*/

int handle_R(va_list val, char *flags)
{
	char *str = va_arg(val, char *);
	unsigned int len = 0, i, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char ch;
	(void) flags;

	if (str == NULL)
		str = "(AHYY)";
	for (i = 0 ; str[i] ; i++)
	{
		for (j = 0; s1[j] ; j++)
		{
			if (s1[j] == str[i])
			{
				ch = s2[j];
				write(1, &ch, 1);
				len++;
				break;
			}
		}
		if (!s1[j])
		{
			ch = str[i];
			write(1, &ch, 1);
			len++;
		}
	}
	return (len);
}
