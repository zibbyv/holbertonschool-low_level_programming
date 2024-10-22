#include <stdio.h>

/**
* main - Entry point
*
* Description: 'prints HEX numbers'
*
* Return: Always 0 (Success)
*/

int main(void)
{
char num = 00;

while (num < 15)
{
printf("%x", num);
num++;
}
putchar('\n');

return (0);
}
