#include <stdio.h>
#include "main.h"

/**
* print_diagonal - print a diagonal line
* @n: length of line
*/

void print_diagonal(int n)
{
int y = 0, x;

while (y < n)
	{

	x = 0;

	while (x < y)
	{
	_putchar(' ');
	x++;

	}
_putchar('\\');
_putchar('\n');
y++;
}
}
