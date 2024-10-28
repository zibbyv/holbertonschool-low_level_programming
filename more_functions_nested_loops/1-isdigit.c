#include <stdio.h>
#include "main.h"

/**
* _isupper - checks if a character is a digit
* @c: checks for character
* Return: 1 if digit, 0 otherwise
*/
int _isdigit(int c)

{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
