#include <stdio.h>

/**
* main - Entry point
*
* Description: 'prints 0 to 9'
*
* Return: Always 0 (Success)
*/

int main(void)
{
int d = 0;

while (d < 10)
{
putchar(d + '0');
d++;
}

putchar('\n');
return (0);
}
