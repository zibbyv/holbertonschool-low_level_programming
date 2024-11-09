#include "main.h"
#include <stddef.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: Pointer to the memory area to fill
 * @b: Constant byte to fill the memory with
 * @n: Number of bytes to fill
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

/* Loop to fill the first n bytes of the memory area with byte 'b' */
for (i = 0; i < n; i++)
{
s[i] = b;  /* Set each byte to the value of b */
}
/* Return the original pointer */
return (s);
}
