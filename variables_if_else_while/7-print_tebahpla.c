#include <stdio.h>

/**
* main - Entry point
*
* Description: 'prints the alphabet in lowercase'
*
* Return: Always 0 (Success)
*/

int main(void)
{
char z = 122;

while (z >= 97)
{
putchar(z);
z--;
}

putchar('\n');
return (0);
}
