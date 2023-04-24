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
	unsigned long int ui, _len = 0, len = 0;
	ui = (unsigned long int)INT_MAX + 1024;

	_len = _printf("Unsigned:[%u]\n", ui);
       	len = printf("Unsigned:[%u]\n", ui);
	printf("\n_printf_len: %d printf_len: %d\n", _len, len);

	printf("===================================\n");
	_len = _printf("Unsigned octal:[%o]\n", ui);
	len = printf("Unsigned octal:[%o]\n", ui);
	printf("\n_printf_len: %d printf_len: %d\n", _len, len);

	printf("===================================\n");
	_len = _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	len = printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("\n_printf_len: %d printf_len: %d\n", _len, len);

	return (0);
}
