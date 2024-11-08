#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies up to n characters from the src string to the dest string
* @dest: destination string
* @src: source string
* @n: maximum number of characters to copy
* Return: the destination value
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

/* Copy characters from src to dest until n characters or the end of src */
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

/* If there are fewer than n characters in src pad dest with '\0' */
while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
