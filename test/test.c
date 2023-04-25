#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int ui, zero, neg,_len = 0, len = 0;
	ui = (unsigned long int)INT_MAX + 1024;
	neg = -12234562;
	zero = 0;

	_len = _printf("Unsigned:[%u]\n", ui);
       	len = printf("Unsigned:[%u]\n", ui);
	printf("\n_printf_len: %d printf_len: %d\n", _len, len);
	
	printf("****************\n");

	_len = _printf("Unsigned:[%u]\n", zero);
        len = printf("Unsigned:[%u]\n", zero);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);
	
	printf("****************\n");
	
	_len = _printf("Unsigned:[%u]\n", neg);
        len = printf("Unsigned:[%u]\n", neg);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

	printf("===================================\n");
	_len = _printf("Unsigned octal:[%o]\n", ui);
	len = printf("Unsigned octal:[%o]\n", ui);
	printf("\n_printf_len: %d printf_len: %d\n", _len, len);
	
	_len = _printf("Unsigned:[%o]\n", zero);
        len = printf("Unsigned:[%o]\n", zero);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

        printf("****************\n");

        _len = _printf("Unsigned:[%o]\n", neg);
        len = printf("Unsigned:[%o]\n", neg);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

	printf("===================================\n");
	_len = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	len = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("\n_printf_len: %d printf_len: %d\n", _len, len);

	printf("**************************\n");
	_len = _printf("Unsigned hexadecimal:[%x, %X]\n", zero, zero);
        len = printf("Unsigned hexadecimal:[%x, %X]\n", zero, zero);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);
	
	printf("**************************\n");

	_len = _printf("Unsigned hexadecimal:[%x, %X]\n", neg, neg);
        len = printf("Unsigned hexadecimal:[%x, %X]\n", neg, neg);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);


	printf("++++++++++++++++++++++++++++++++++++++++++++\n");

	_len = _printf("%S\n", "Best\nSchool");
	printf("\n_printf_len: %d", _len);

	return (0);
}
