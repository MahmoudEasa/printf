#include "../main.h"
#include <stdio.h>
#include <limits.h>
int main(void)
{
	unsigned int ui;
        int ch = 'm', len, len2;
        char *ptr = "Hello world!";

        len = _printf("\n%%character is:\t %c%%\n string:\t %% %s x04[dd]{ff]}} \" \' done%%\n", ch, ptr);
        len2 = printf("\n%%character is:\t %c%%\n string:\t %% %s x04[dd]{ff]}} \" \' done%%\n", ch, ptr);

        printf("\n_printf_len: %d printf_len: %d\n", len, len2);

        len = _printf("\n######%v%#####v\t%c\t%c\t%s\t%s\n", 'C', 'H', "CHCH", "MMM");
        len2 = printf("\n######%v%#####v\t%c\t%c\t%s\t%s\n", 'C', 'H', "CHCH", "MMM");

        printf("\n_printf_len: %d printf_len: %d\n", len, len2);

        len = _printf("\nString:[%s]\n", "I am a string !");
        len2 = printf("\nString:[%s]\n", "I am a string !");

        printf("\n_printf_len: %d printf_len: %d\n", len, len2);

	printf("***********************\n");
	
	ui = (unsigned int)INT_MAX + 1024;

	_printf("Unsigned:[%u]\n", ui);
    	printf("Unsigned:[%u]\n", ui);
        return (0);
}

