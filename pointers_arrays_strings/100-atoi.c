#include "main.h"
#include <stdio.h>

/**
* _atoi - converts a string to an integer
* @s: the string to be converted
*
* Return: the integer value
*/

int _atoi(char *s)
	{
	int count = 0;
	int sign = 1;
	unsigned int finalnum = 0;
	int digit;
	int evalnum = 0;

	while (s[count] != '\0')
	{
	digit = s[count];

		/* Check if character is a digit */
		if (digit >= '0' && digit <= '9')
		{
			evalnum = 1; /* Mark start reading a number */
			finalnum = (finalnum * 10) + (digit - '0');
		}
		else if (evalnum)
		{
			break;
		}
		else if (s[count] == '-') /* handle sign */
		{
		sign *= -1;
			}
			count++;
			}

	return (sign * finalnum);
}
