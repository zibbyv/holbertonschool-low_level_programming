#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i, match;

while (*s != '\0')
{
match = 0;
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
count++;
match = 1;
break;
}
}
if (!match)
break;
s++;
}
return (count);
}
