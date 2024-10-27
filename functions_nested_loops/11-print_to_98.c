#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98
*
* @n: the starting number
*/
void print_to_98(int n)
{
while (n != 98)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

if (n >= 10)
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');

if (n != 98)
{
_putchar(',');
_putchar(' ');
}

if (n < 98)
n++;
else
n--;
}
_putchar('9');
_putchar('8');
_putchar('\n');
}
