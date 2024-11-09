#include "main.h"
#include <stdio.h>

/**
 * leet - turn letters into numbers
 * @s: string
 * Return: modified string
 */
char *leet(char *s)
{
int i, j;
char lookup[] = "aAeEoOtTlL";  /* Characters to be replaced */
char replacements[] = "4433007711";  /* Corresponding replacements */

/* Loop through the string */
for (i = 0; s[i] != '\0'; i++)
{
/* Check if the current character is in the lookup array */
for (j = 0; lookup[j] != '\0'; j++)
{
if (s[i] == lookup[j])
{
s[i] = replacements[j];  /* Replace with corresponding number */
break;  /* Stop checking after a match is found */
}
}
}
return (s);  /* Return modified string */
}
