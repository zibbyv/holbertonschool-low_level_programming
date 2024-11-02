#include "main.h"

/**
* puts2 - prints every other character
* @srt: string
*/

void puts2(char *str)
{
int index = 0;

while (str[index] != '\0') /* index the string */

{
if (index % 2 == 0) /* check if string is even */
{
_putchar(str[index]); /* print out the current string*/
}
index++; /* move to the next character */
}
    _putchar('\n');
}
