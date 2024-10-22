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
char a = 'a';
char A = 'A';

while (a <= 'z')
{
putchar(a);
a++;
}

while (A <= 'Z')
{
putchar(A);
A++;
}

putchar('\n');
return (0);
}
