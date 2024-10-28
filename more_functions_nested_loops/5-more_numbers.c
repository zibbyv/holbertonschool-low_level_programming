#include <stdio.h>
#include "main.h"

/**
* more_numbers - prints numbers from 0 to 14, ten times
*/
void more_numbers(void)
{
int n = 0;

while (n < 10)
{
int a = 0;
        
while (a <= 14)
{
if (a > 9)
putchar((a / 10) + '0');
putchar((a % 10) + '0');
a++;
}
putchar('\n');
n++;
}
}
