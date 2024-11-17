#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings representing the arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);  /* Print each argument on a new line */
}
return (0);  /* Return 0 to indicate successful execution */
}
