#include "main.h"

/**
 * _strlen_recursion - Prints a the length of a string
 * @s: The string to be counted
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')  /* Base case: end of string */
return (0);

return (1 + _strlen_recursion(s + 1));  /* add 1 for the current character and recurse */
}
