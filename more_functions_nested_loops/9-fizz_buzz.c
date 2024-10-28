#include <stdio.h>

/**
* main - Entry point
*
* Description: 'prints numbers and fizz buzz'
*
* Return: Always 0 (Success)
*/

int main(void)
{

int x = 1;


while (x <= 100)
{

	if ((x % 3 == 0) && (x % 5 == 0))
	{
	printf("Fizz Buzz ");
	}
	else if (x % 3 == 0)
	{
	printf("Fizz ");
	}
	else if (x % 5 == 0)
	{
	printf("Buzz ");
	}
	else
	{
	printf("%d ", x);
	}
	x++;
	}
printf("\n");
return (0);
}
