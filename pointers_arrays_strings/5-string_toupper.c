#include "main.h"
#include <stdio.h>

/**
* string_toupper - turn lowercase letters to uppercase
* @str: string
* Return: the string in uppercase
*/
char *string_toupper(char *str)
{
int i;

/* loop through the string */
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z') 
{
str[i] = str[i] - 32; /* Convert to uppercase */
}
}
return (str);
}
