#include "../main.h"
#include <stdio.h>

int main(void)
{
	char ch = 'm', len, len2;
	char *ptr = "Hello world!";

	len = _printf("character is: %c string: %s done\n", ch, ptr);
	len2 = printf("character is: %c string: %s done\n", ch, ptr);

	printf("\n_printf_len: %d printf_len: %d\n", len, len2);

	return (0);
}

