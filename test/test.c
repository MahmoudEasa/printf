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
	void *addr;
	char str[] = "lobna";
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	ui = (unsigned long int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	neg = LONG_MIN;
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


	printf("\n====================== POS ====================\n");
	printf("\n********Add L********\n");

        _len = _printf("Unsigned:[%lu]\n", ui);
        len = printf("Unsigned:[%lu]\n", ui);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

	printf("\n********Add H********\n");

        _len = _printf("Unsigned:[%hu]\n", ui);
        len = printf("Unsigned:[%hu]\n", ui);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

	printf("\n======================= Neg ===================\n");

	printf("\n********Add L********\n");

        _len = _printf("Unsigned:[%lu]\n", neg);
        len = printf("Unsigned:[%lu]\n", neg);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

        printf("\n********Add H********\n");

        _len = _printf("Unsigned:[%hu]\n", neg);
        len = printf("Unsigned:[%hu]\n", neg);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

	printf("\n==========================Zero==================\n");

	printf("\n********Add L********\n");

        _len = _printf("Unsigned:[%lu]\n", zero);
        len = printf("Unsigned:[%lu]\n", zero);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

        printf("\n********Add H********\n");

        _len = _printf("Unsigned:[%hu]\n",zero);
        len = printf("Unsigned:[%hu]\n", zero);
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

	printf("\n==================== POS ===================\n");

	printf("********Add L********\n");

        _len = _printf("Unsigned:[%lo]\n", ui);
        len = printf("Unsigned:[%lo]\n", ui);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

	printf("********Add H********\n");

        _len = _printf("Unsigned:[%ho]\n", ui);
        len = printf("Unsigned:[%ho]\n", ui);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);
	
	printf("\n==================== Zero ===================\n");
        printf("********Add L********\n");

        _len = _printf("Unsigned:[%lo]\n", zero);
        len = printf("Unsigned:[%lo]\n", zero);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

        printf("********Add H********\n");

        _len = _printf("Unsigned:[%ho]\n", zero);
        len = printf("Unsigned:[%ho]\n", zero);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

	printf("\n==================== NEG ===================\n");
	printf("********Add L********\n");

        _len = _printf("Unsigned:[%lo]\n", neg);
        len = printf("Unsigned:[%lo]\n", neg);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

        printf("********Add H********\n");

        _len = _printf("Unsigned:[%ho]\n", neg);
        len = printf("Unsigned:[%ho]\n", neg);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

	printf("\n================= HEX ==================\n");
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

	printf("\n======================= POS ==========================\n");
	printf("\n************Add L****************\n");

	_len = _printf("Unsigned hexadecimal:[%lx, %lX]\n", ui, ui);
        len = printf("Unsigned hexadecimal:[%lx, %lX]\n", ui, ui);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

	printf("\n************Add H****************\n");

        _len = _printf("Unsigned hexadecimal:[%hx, %hX]\n", ui, ui);
        len = printf("Unsigned hexadecimal:[%hx, %hX]\n", ui, ui);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

	printf("\n======================= NEG ==========================\n");
	printf("\n************Add L****************\n");

        _len = _printf("Unsigned hexadecimal:[%lx, %lX]\n", neg, neg);
        len = printf("Unsigned hexadecimal:[%lx, %lX]\n", neg, neg);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

        printf("\n************Add H****************\n");

        _len = _printf("Unsigned hexadecimal:[%hx, %hX]\n", neg, neg);
        len = printf("Unsigned hexadecimal:[%hx, %hX]\n", neg, neg);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

	printf("\n======================= Zero ==========================\n");
        printf("\n************Add L****************\n");

        _len = _printf("Unsigned hexadecimal:[%lx, %lX]\n", zero, zero);
        len = printf("Unsigned hexadecimal:[%lx, %lX]\n", zero, zero);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

        printf("\n************Add H****************\n");

        _len = _printf("Unsigned hexadecimal:[%hx, %hX]\n", zero, zero);
        len = printf("Unsigned hexadecimal:[%hx, %hX]\n", zero, zero);
        printf("\n_printf_len: %d printf_len: %d\n", _len, len);

	printf("++++++++++++++++++++++++++++++++++++++++++++\n");

	_len = _printf("%S\n", "Best\nSchool");
	printf("\n_printf_len: %d\n", _len);

	printf("++++++++++++++++++++++++++++++++++++++++++++\n");

	_len = _printf("Address:[%p]\n", addr);
	len = printf("Address:[%p]\n", addr);
	printf("\n_printf_len: %d printf_len: %d\n", _len, len);

	printf("+++++++++++++++++++++++++++++++++++++++++++\n");

	_len = _printf("Unknown:[%r]\n", str);
	printf("\n len before, len after %d\n", _len);
 	
	printf("++++++++++++++++++++++++++++++++++++++++++++\n");

	_len = _printf("R:--> [%R]: \n", ch);
	printf("%d\n", _len);
	return (0);
}
