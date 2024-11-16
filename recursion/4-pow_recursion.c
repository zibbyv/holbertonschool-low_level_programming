#include "main.h"

/**
 * _pow_recursion - returns the power of x raised to the power of y
 * @x: integer
 * @y: raised to the power of
 * Return: the value
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)  /* Base case: any number to the power of 0 is 1 */
return (1);
return (x * _pow_recursion(x, y - 1));
}
