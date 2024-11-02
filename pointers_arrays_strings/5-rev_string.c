#include "main.h"

/**
* rev_string - reverses a string
* @s: string
*/

void rev_string(char *s)
{
int first = 0;
int last = 0;
char temp;

/* Calculate length */

while (s[last] != '\0')
{
last++;
}
last = last - 1;

/* Swap characters till first and last meet */
while (first < last)
{

/* Swap characters */
temp = s[first];
s[first] = s[last];
s[last] = temp;

/* Move pointers towards each other */
first++;
last--;
}
}
