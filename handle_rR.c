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
	char rev = str[0];
	(void)flags;

	len = strlen(str);
	if (str == NULL)
		str = "(Null)";
	for (i = 0 ; i < len / 2 ; i++)
	{
		rev = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = rev;
	}
	write(1, str, len);
	return (len);
}

/**
 * handle_R - prints the rot13'ed string
 * @val: va_list
 * @flags: string
 * Return: return length
*/

int handle_R(va_list val, char *flags)
{
	char *str = va_arg(val, char *);
	int len = 0, i, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	(void) flags;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0; j < 52 ; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
		}
	}
	len = strlen(str);
	write(1, str, len);
	return (len);
}
