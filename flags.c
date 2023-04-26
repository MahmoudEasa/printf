#include <string.h>
#include <stdio.h>
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
}
