#include <stdio.h>

/**
* main - Entry point
*
* Description: 'prints 0 to 10'
*
* Return: Always 0 (Success)
*/

int main(void)
{
char d = 0;

while (d < 10)
{
printf("%d", d);
d++;
}

putchar('\n');
return (0);
}
