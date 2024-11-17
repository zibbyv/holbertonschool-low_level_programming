#include <stdio.h>
/**
 * main - prints number of arguments passed into it
 * @argc: number of arguments passed to the program
 * @argv: array of strings
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
(void)argv; /* Suppress unused parameter warning */
printf("%d\n", argc - 1); /* Print the number of arguments */
return (0); /* Return 0 to indicate successful execution */
}
