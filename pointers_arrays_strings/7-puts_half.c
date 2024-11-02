#include "main.h"

/**
* puts_half - prints half a string
* @str: string
*/

void puts_half(char *str)
{
int length = 0;
int end;
int i;

/* calculate the length of the string */
while (str[length] != '\0')
length++;

/* ending point for printing the first half */
if (length % 2 == 0)
end = length / 2; /* even length end halfway */
else
end = (length + 1) / 2; /* odd length round up for halfway */

/* print the first half of the string */
for (i = 0; i < end; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
