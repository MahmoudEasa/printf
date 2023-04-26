#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * handle_flags - function
 * @flags: string
 * @str: input value
*/
void handle_flags(char *flags, char *str)
{
	int f_len = strlen(flags), s_len = strlen(str), n = flags[f_len - 1] - '0', k;

	if (n > 0 && n <= 9)
	{
		if (n > s_len)
		{
			if (flags[f_len - 2] == '-')
				for (k = s_len ; k < n ; k++)
					*(str + k) = ' ';
			else if (flags[(f_len - 2)] == '0')
				if (flags[(f_len - 3)] == '-')
				{
					for (k = s_len ; k < n ; k++)
						*(str + k) = ' ';
					str[k] = '\0';
				}
				else
				{
					for (k = s_len ; k >= 0 ; k--, n--)
						str[n] = str[k];
					for (; n >= 0; n--)
						str[n] = '0';
				}
			else
			{
				for (k = s_len ; k >= 0 ; k--, n--)
					str[n] = str[k];
				for (; n >= 0; n--)
					str[n] = ' ';
			}
		}
	}
	handle_plus(flags, str);
}
/**
 * handle_plus - function
 * @flags: input value
 * @str: input valus
*/

void handle_plus(char *flags, char *str)
{
	int len = strlen(str), i;

	if (flags[0] == '+' || flags[0] == ' ')
		if (str[0] != '-')
		{
			if (str[0] == '0' && str[len - 1] == '0')
				str[0] = flags[0];
			if (str[0] > '0' && str[len - 1] >= '0')
			{
				for (i = len ; i >= 0 ; i--)
					str[i + 1] = str[i];
				str[0] = flags[0];
			}
			else
			{
				for (i = 0 ; i < len ; i++)
				{
					if (str[i] >= '0' && str[i + 1] == ' ')
					{
						str[i + 1] = str[i];
						str[i] = flags[0];
						break;
					}
					if (str[i] == ' ' && str[i + 1] >= '0')
					{
						str[i] = flags[0];
						break;
					}
				}
			}
		}
}
