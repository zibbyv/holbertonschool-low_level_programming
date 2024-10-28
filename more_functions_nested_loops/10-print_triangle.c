#include <stdio.h>
#include "main.h"

/**
* print_triangle - print a triangle
* @size: size of triangle
*/

void print_triangle(int size)

{
int y = 0, x, l;

if (size <= 0)
_putchar('\n');

while (y < size)
	{

	l = (size - 1);
	
	while (y < l)
	{
	_putchar(' ');
	l--;
	}
		x = 0;

		while (x <= y)
		{
		_putchar(35);
		x++;
	}
	_putchar('\n');
y++;
}
}
