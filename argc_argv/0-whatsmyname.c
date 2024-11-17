#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: number of command-line arguments
 * @argv: array of strings representing the command-line arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
(void)argc;  /* Suppress the unused parameter warning */
printf("%s\n", argv[0]);
return (0);
}
