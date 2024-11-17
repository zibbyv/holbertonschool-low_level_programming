#include "main.h"

/**
 * is_prime_number - returns 1 if prime and 0 if not
 * @n: integer to check
 *
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
int i;
if (n <= 1)
return (0); /* Not prime */
if (n <= 3)
return (1); /* 2 and 3 are prime */
if (n % 2 == 0)
return (0); /* Even numbers greater than 2 are not prime */
for (i = 3; i * i <= n; i += 2)
{
if (n % i == 0)
return (0); /* Divisible by i, not prime */
}
return (1); /* Prime */
}
