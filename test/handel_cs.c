#include "../main.h"
#include <stdio.h>

int main(void)
{
	char ch = 'm', len, len2;
	char *ptr = "Hello world!";

	len = _printf("%%character is:\t %c\n string:\t %% %s x04[dd]{ff]}} \" \' done%%\n", ch, ptr);
	len2 = printf("%%character is:\t %c\n string:\t %% %s x04[dd]{ff]}} \" \' done%%\n", ch, ptr);

	printf("\n_printf_len: %d printf_len: %d\n", len, len2);

	len = _printf("%%");
	len2 = printf("%%");

	printf("\n_printf_len: %d printf_len: %d\n", len, len2);

	return (0);
}

