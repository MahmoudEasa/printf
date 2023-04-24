#include "../main.h"
#include <stdio.h>
#include <stddef.h>
#include <limits.h>

int main(void)
{
	char ch = 'm', len, len2;
	char *ptr = "Hello world!";
	int p = 75;

	len = _printf("\n%%character \\ is:\t %c%%\n s%r%risng:\t %% %s x04[dd]{ff]}} \" \' done%%%d\n", ch, ptr, p);
	len2 = printf("\n%%character \\ is:\t %c%%\n s%r%risng:\t %% %s x04[dd]{ff]}} \" \' done%%%d\n", ch, ptr, p);
	printf("\n_printf_len: %d printf_len: %d\n", len, len2);
	_printf("\n=============================\n");

	len = _printf("Length:[%d, %i]\n", len, len);
	len2 = printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("\n=============================\n");
	printf("\n=============================\n");


	printf("\n_printf_len: %d printf_len: %d\n", len, len2);

	len = _printf("\n######%v%#####v %###%\t%c\t%c\t%s\t%s\n", 'C', 'H', "CHCH", "MMM");
	len2 = printf("\n######%v%#####v %###%\t%c\t%c\t%s\t%s\n", 'C', 'H', "CHCH", "MMM");

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


	_printf("\n=============================\n");

	len = _printf("%b\n", 98);
	printf("\n_printf_len: %d\n", len);
	len = _printf("%b\n", 0);
	printf("\n_printf_len: %d\n", len);
	len = _printf("%b\n", 5000);
	printf("\n_printf_len: %d\n", len);
	len = _printf("%b\n", INT_MAX);
	printf("\n_printf_len: %d\n", len);
	len = _printf("%b\n", UINT_MAX);
	printf("\n_printf_len: %d\n", len);
	
	return (0);
}

