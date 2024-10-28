#include <stdio.h>
#include "main.h"

/**
* print_numbers - prints the alphabet in lowercase
* @a: starting number
*/
void print_numbers(void)

{
	int a = 48;

	while (a <= 57)
	{
	_putchar(a);
	a++;
	}
	_putchar('\n');
}
