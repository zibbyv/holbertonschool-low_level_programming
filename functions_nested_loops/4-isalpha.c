#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _isalpha - checks if a character is a letter
* @c: checks for character
* Return: 1 if lowercase, 0 otherwise
*/
int _isalpha(int c)

{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
