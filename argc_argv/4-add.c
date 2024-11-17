#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - Checks if a string represents a positive integer
 * @s: The string to check
 *
 * Return: 1 if the string is a valid positive number, 0 otherwise
 */
int is_number(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (!isdigit(s[i]))  /* Check if each character is a digit */
return (0);
}
return (1);
}

/**
 * main - adds positive numbers passed as arguments
 * @argc: number of arguments
 * @argv: array
 *
 * Return: 0 if successful, 1 if an argument contains non-digit symbols
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc == 1)  /* If no numbers are passed, print 0 */
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)  /* Loop through each argument */
{
if (!is_number(argv[i]))
/* Validate that the argument is a positive number */
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
/* Convert the argument to an integer and add it to the sum */
}

printf("%d\n", sum);  /* Print the result followed by a new line */
return (0);
}
