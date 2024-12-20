#include "main.h"
#include <stdio.h>

/**
* _strcpy - copies a string
* @dest: destination
* @src: source
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;

	if (dest == NULL)
	return (NULL);

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';

	return (dest);
}
