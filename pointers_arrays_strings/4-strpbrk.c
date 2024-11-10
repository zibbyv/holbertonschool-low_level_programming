#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to search
 * @accept: string containing characters to match
 *
 * Return: pointer to the first occurrence in s of any character in accept
 * or NULL if no character matches
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s != '\0')
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (NULL);
}
