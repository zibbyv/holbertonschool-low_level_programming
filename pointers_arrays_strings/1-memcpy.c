#include "main.h"
#include <stddef.h>

/**
 * _memcpy - function that copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

/* Loop to copy n bytes from src to dest */
for (i = 0; i < n; i++)
{
dest[i] = src[i];  /* Copy each byte from src to dest */
}

/* Return the original pointer to dest */
return (dest);
}
