#include "main.h"
#include <stdio.h>

/**
* _strncat - appends up to n characters from src string to the dest string
* @dest: destination string
* @src: source string
* @n: maximum number of characters to append from src
* Return: the destination value
*/

char *_strncat(char *dest, char *src, int n)
{
char *p = dest;

/* Move p to the end of dest */
while (*p)
p++;

/* Append up to n characters from src to dest */
while (n > 0 && *src != '\0') {
*p++ = *src++;
n--;
}

/* Add the null terminator at the end */
*p = '\0';

return (dest);
}
