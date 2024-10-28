#include <stdio.h>
#include "main.h"

/**
* print_line - print a line
* @n: length of line
*/

void print_line(int n)
{
int a = 0;
while (a <= n)
	{
	_putchar('_');
	a++;
	}
	_putchar('\n');
}
