#include "main.h"
#include <stdio.h>

/**
* _strcat - appends the src string to the dest string
* @dest: destination string
* @src: source string
* Return: the destination value
*/

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
		p++;
	while ((*p++ = *src++) != '\0')
		continue;
	return (dest);
}
