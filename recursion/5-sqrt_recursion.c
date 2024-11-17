#include "main.h"

/**
 * helper_sqrt - function to find square root recursively
 * @n: number to find the square root of
 * @i: current number to check as a potential square root
 *
 * Return: square root if found, -1 otherwise
 */
int helper_sqrt(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (helper_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: natural square root or -1 if none
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (helper_sqrt(n, 0));
}
