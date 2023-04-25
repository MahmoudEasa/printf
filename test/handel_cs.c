#include "../main.h"
#include <stdio.h>
#include <stddef.h>
#include <limits.h>

int main(void)
{
	char ch = 'm', len, len2;
	char *ptr = "Hello\n %% \\ ###%v%###v %33% %###% %s world!";
	int p = 75;
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;

	len = _printf("\n%%character \\ is: %t%r%w% 0-.1v%4\t %c%%\n string:\t %% %s x04[dd]{ff]}} \" \' done%%%d\n", ch, ptr, p);
	len2 = printf("\n%%character \\ is: %t%r%w% 0-.1v%4\t %c%%\n string:\t %% %s x04[dd]{ff]}} \" \' done%%%d\n", ch, ptr, p);
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

	_printf("\n=============================\n");

	len = _printf("Unsigned:[%u]\n", ui);
    	len2 = printf("Unsigned:[%u]\n", ui);
	printf("\n_printf_len: %d printf_len: %d\n", len, len2);


	_printf("\n===================================\n");

	len2 = printf("Expected     : %cc\n", 'a');
	len = _printf("Actual     : %cc\n", 'a');
	printf("\n_printf_len: %d printf_len: %d\n", len, len2);
	len2 = printf("Expected   : %c\n", 53);
	len = _printf("Actual     : %c\n", 53);
	printf("\n_printf_len: %d printf_len: %d\n", len, len2);
	len2 = printf("Expected   : %c.\n", '\0');
	len = _printf("Actual     : %c.\n", '\0');
	printf("\n_printf_len: %d printf_len: %d\n", len, len2);
	len2 = printf("Expected   : %%%c\n", 'y');
	len = _printf("Actual     : %%%c\n", 'y');
	printf("\n_printf_len: %d printf_len: %d\n", len, len2);
	len2 = printf("Expected   : %s\n", "holberton");
	len = _printf("Actual     : %s\n", "holberton");
	printf("\n_printf_len: %d printf_len: %d\n", len, len2);
	len2 = printf("Expected   : %s$\n", "");
	len = _printf("Actual     : %s$\n", "");
	printf("\n_printf_len: %d printf_len: %d\n", len, len2);
	len2 = printf("Expected   : %sschool\n", "holberton");
	len = _printf("Actual     : %sschool\n", "holberton");
	printf("\n_printf_len: %d printf_len: %d\n", len, len2);
	len2 = printf("Expected: %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
	len = _printf("Actual  : %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
	printf("\n_printf_len: %d printf_len: %d\n", len, len2);

	_printf("\n===================================\n");

	len2 = printf("Expected  %i %d\n", 0032, 0032);
	len = _printf("Actual    %i %d\n", 0032, 0032);
	printf("\n_printf_len: %d printf_len: %d\n", len, len2);


	_printf("\n===================================\n");

	len2 = printf("Expected  %li %ld\n", UINT_MAX, UINT_MAX);
	len = _printf("Actual    %li %ld\n", UINT_MAX, UINT_MAX);
	printf("\n_printf_len: %d printf_len: %d\n", len, len2);

	_printf("\n===================================\n");

	len2 = printf("Expected  %hi %hd\n", NULL, NULL);
	len = _printf("Actual    %hi %hd\n", NULL, NULL);
	printf("\n_printf_len: %d printf_len: %d\n", len, len2);

	len2 = printf("Expected  %hi %hd\n", 0, 0);
	len = _printf("Actual    %hi %hd\n", 0, 0);
	printf("\n_printf_len: %d printf_len: %d\n", len, len2);

	len2 = printf("Expected  %hi %hd\n", -1, -1);
	len = _printf("Actual    %hi %hd\n", -1, -1);
	printf("\n_printf_len: %d printf_len: %d\n", len, len2);



	return (0);
}

