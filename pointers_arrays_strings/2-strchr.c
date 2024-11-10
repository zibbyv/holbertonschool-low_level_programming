#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate character in a string
 * @s: the string to search
 * @c: the first occurrence of the character to search for
 * Return: pointer to character c in the string s or NULL
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
/* check if the current character matches 'c' */
if (*s == (char)c)
{
return ((char *)s);/* return pointer to the first occurrence */
}
s++;
}
/* If 'c' is '\0' return pointer to null character at end of string */
if (c == '\0')
{
return ((char *)s);
}
/* If 'c' is not found, return NULL */
return (NULL);
}

