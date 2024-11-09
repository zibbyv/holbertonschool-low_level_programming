#include "main.h"
#include <stdio.h>

/**
* cap_string - turn first letter to uppercase
* @str: string
* Return: the modified string
*/
char *cap_string(char *str)
{
int i;
int word = 1;

/* Loop through the string */
for (i = 0; str[i] != '\0'; i++)
{
/* Check for numbers and capital letters */
if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] == '-'))
{
/* Flag as changed */
word = 0;
}
else if (str[i] >= 'a' && str[i] <= 'z') /* Check if lowercase letter */
{
if (word)
{
str[i] = str[i] - 32; /* Convert to uppercase */
word = 0; /* Flag as changed */
}
}
else
{
word = 1; /* Marks start of a new word */
}
}
return (str);
}
