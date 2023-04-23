#include "../main.h"
#include <stdio.h>
#include <stddef.h>

int main(void)
{
	char ch = 'm', len, len2;
	char *ptr = "Hello world!";

	len = _printf("\n%%character is:\t %c%%\n string:\t %% %s x04[dd]{ff]}} \" \' done%%\n", ch, ptr);
	len2 = printf("\n%%character is:\t %c%%\n string:\t %% %s x04[dd]{ff]}} \" \' done%%\n", ch, ptr);

	len = _printf("Length:[%d, %i]\n", len, len);
	len2 = printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("\n=============================\n");
	printf("\n=============================\n");


	printf("\n_printf_len: %d printf_len: %d\n", len, len2);

	len = _printf("\n######%v%#####v\t%c\t%c\t%s\t%s\n", 'C', 'H', "CHCH", "MMM");
	len2 = printf("\n######%v%#####v\t%c\t%c\t%s\t%s\n", 'C', 'H', "CHCH", "MMM");

	printf("\n_printf_len: %d printf_len: %d\n", len, len2);

	len = _printf("\nString:[%s]\n", "I am a string !");
	len2 = printf("\nString:[%s]\n", "I am a string !");

	printf("\n_printf_len: %d printf_len: %d\n", len, len2);

	len = _printf(NULL);
	len2 = printf(NULL);

	printf("\n_printf_len: %d printf_len: %d\n", len, len2);

	len = _printf("\n");
	len2 = printf("\n");

	printf("\n_printf_len: %d printf_len: %d\n", len, len2);


	len = _printf("\n44\n");
	len2 = printf("\n44\n");

	printf("\n_printf_len: %d printf_len: %d\n", len, len2);


	return (0);
}

