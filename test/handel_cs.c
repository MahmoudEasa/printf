#include "../main.h"
#include <stdio.h>

int main(void)
{
	char ch = 'm';
	char *ptr = "Hello world!";

	_printf("character is: %c string: %s done\n", ch, ptr);
	printf("character is: %c string: %s done\n", ch, ptr);

	return (0);
}

