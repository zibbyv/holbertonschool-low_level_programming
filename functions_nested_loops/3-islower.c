#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks if a character is lowercase
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
	_putchar('1');
	return (1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
