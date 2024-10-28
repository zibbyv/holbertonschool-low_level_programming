#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _isupper - checks if a character is uppercase
* @c: checks for character
* Return: 1 if lowercase, 0 otherwise
*/
int _isupper(int c)

{
if (islower(c))
{
return (0);
}
else
{
return (1);
}
}
