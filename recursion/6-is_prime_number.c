#include "main.h"
/**
 * is_prime_number_recursive - Helper function to check primality recursively
 * @n: Integer to check
 * @i: Current divisor to test
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number_recursive(int n, int i)
{
if (n <= 1)
return (0); /* Not prime */
if (i * i > n)
return (1); /* Prime */
if (n % i == 0)
return (0); /* Divisible by i, not prime */
return (is_prime_number_recursive(n, i + 2));
/* Recursive call with next divisor */
}
/**
 * is_prime_number - Checks if an integer is a prime number
 * @n: Integer to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0); /* Not prime */
if (n == 2)
return (1); /* 2 is prime */
return (is_prime_number_recursive(n, 3)); /* Start recursion with divisor 3 */
}
