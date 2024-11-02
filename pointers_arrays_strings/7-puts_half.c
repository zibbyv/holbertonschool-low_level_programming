#include "main.h"

/**
* puts_half - prints half a string
* @str: string
*/

void puts_half(char *str)
{
int length = 0;
int start;
int i;

/* calculate the length of the string */
while (str[length] != '\0')
length++;

/* starting point for printing the second half */
if (length % 2 == 0)
start = length / 2; /* even length start halfway */
else
start = (length + 1) / 2; /* odd length round up for halfway */

/* print the first half of the string */
for (i = start; i < length; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
