#include <stdio.h>
#include "main.h"

/**
* _strlen - print length of a string
* @s: string length
* Return: length of the string
*/

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
