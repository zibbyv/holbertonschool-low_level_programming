#include <stddef.h>

/**
 * _strstr - g
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j = 0;
int match = 0;

if (needle[0] == '\0')
{
return (haystack);
}

while (haystack[i] != '\0')
{
if (haystack[i] == needle[0])
{
match = 1;
while (match == 1 && needle[j] != '\0' && haystack[i + j] != '\0')
{
if (needle[j] != haystack[i + j])
{
match = 0;
}
j = j + 1;
}

if (match == 1)
{
return (haystack + i);
}
}
i = i + 1;
j = 0;
}
return (NULL);
}
