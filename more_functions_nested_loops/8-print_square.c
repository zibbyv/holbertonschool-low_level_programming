#include <stdio.h>
#include "main.h"

/**
* print_square - print a square
* @size: size of square
*/

void print_square(int size)

{
int y = 0, x;

if (size <= 0)
_putchar('\n');

while (y < size)
	{

	x = 0;

	while (x < size)
	{
	_putchar(35);
	x++;
	}

_putchar('\n');
y++;
}
}
