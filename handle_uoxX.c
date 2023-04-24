#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
/**
 * handle_u - write unsigned int
 * @val: input value
 * @flags: string
 * Return: return lenght
*/

int handle_u(va_list val, char *flags)
{
	unsigned int num = va_arg(val, unsigned int);
	int len = 0;
	char str[1024];
	(void)flags;

	sprintf(str, "%u", num);
	len = strlen(str);

	write(1, str, len);
	return (len);
}
/**
 * handle_o - write unsigned octal int
 * @val: input value
 * @flags: string
 * Return: return length
*/
int handle_o(va_list val, char *flags)
{
	unsigned int num = va_arg(val, unsigned int), len = 0, n;
	char str[1024];

	(void)flags;
	if (num == 0)
	{
		char zero = '0';

		write(1, &zero, 1);
		return (1);
	}
	n = num;
	while (n > 0)
	{
		len++;
		n /= 8;
	}
	sprintf(str, "%o", num);
	write(1, str, len);
	return (len);
}

/**
 * handle_x - print hexadecimal values in lowercase
 * @val: input value
 * @flags: string
 * Return: return length
*/

int handle_x(va_list val, char *flags)
{
	unsigned int num = va_arg(val, unsigned int), len = 0, n;
	char str[1024];

	(void)flags;
	while (n > 0)
	{
		len++;
		n /= 16;
	}
	sprintf(str, "%x", num);
	write(1, str, len);
	return (len);
}
/**
 * handle_X - print hexadecimal in uppercase
 * @val: input value
 * @flags: string
 * Return: return length
*/
int handle_X(va_list val, char *flags)
{
	unsigned int num = va_arg(val, unsigned int), len = 0, n, i;
	char str[1024];

	(void)flags;
	while (n > 0)
	{
		len++;
		n /= 16;
	}
	sprintf(str, "%X", num);
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	write(1, &str[i], 1);
	}
	return (len);
}
