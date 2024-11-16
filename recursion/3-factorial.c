#include "main.h"

/**
 * factorial - returns a factorial
 * @n: The integer
 * Return: the factorial
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 1)  /* Base case: end of string */
return (1);
else
return (n * factorial(n - 1));  /* minus 1 to go to next number */
}
