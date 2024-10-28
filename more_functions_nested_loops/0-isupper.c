#include <stdio.h>
#include "main.h"

/**
* _isupper - checks if a character is uppercase
* @c: checks for character
* Return: 1 if lowercase, 0 otherwise
*/
int _isupper(int c)

{
if (c < 91 && c > 64)
{
return (1);
}
else
{
return (0);
}
}
