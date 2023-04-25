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
	unsigned long int num = va_arg(val, unsigned long int), len = 0;
	char str[1024];

	if (*flags == 'l')
		sprintf(str, "%lu", num);
	else if (*flags == 'h')
		sprintf(str, "%hu", num);
	else
		sprintf(str, "%u", num);
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
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
	unsigned long int num = va_arg(val, unsigned long int), len = 0;
	char str[1024];

	if (*flags == 'l')
		sprintf(str, "%lo", num);
	else if (*flags == 'h')
		sprintf(str, "%ho", num);
	else
		sprintf(str, "%o", num);

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	len = strlen(str);
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
	unsigned long int num = va_arg(val, unsigned long int), len = 0;
	char str[1024];

	if (*flags == 'l')
		sprintf(str, "%lx", num);
	else if (*flags == 'h')
		sprintf(str, "%hx", num);
	else
		sprintf(str, "%x", num);

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	len = strlen(str);
	write(1, str, len);
	return (len);
}
/**
 * handle_X - print hexadecimal in uppercase
 * @val: input value
 * @flags: sting
 * Return: return length
*/
int handle_X(va_list val, char *flags)
{
	unsigned long int num = va_arg(val, unsigned long int), len = 0, i;
	char str[1024];

	if (*flags == 'l')
		sprintf(str, "%lX", num);
	else if (*flags == 'h')
		sprintf(str, "%hX", num);
	else
		sprintf(str, "%X", num);
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	write(1, &str[i], 1);
	len++;
	}
	return (len);
}
