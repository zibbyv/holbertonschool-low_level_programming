#include <stdio.h>

/**
* main - Entry point
*
* Description: 'prints the alphabet in lowercase and uppercase'
*
* Return: Always 0 (Success)
*/

int main(void)
{
char i = '0';
char a = 'a';

while (i <= '9')
{
putchar(i);
i++;
}

while (a <= 'f')
{
putchar(a);
a++;
}

putchar('\n');
return (0);
}
