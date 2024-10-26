#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @r: the number to check
* Return: The value of r
*/
int print_last_digit(int r)
{
int n = r % 10;
if (n < 0)
n = -n;

_putchar('0' + n);
return (n);
}
