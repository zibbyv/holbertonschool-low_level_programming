#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings representing the arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc != 3)  /* Check if there are exactly 3 arguments (program name + 2 numbers) */
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);  /* Convert the first argument to an integer */
num2 = atoi(argv[2]);  /* Convert the second argument to an integer */
result = num1 * num2;  /* Multiply the two numbers */

printf("%d\n", result);  /* Print the result followed by a new line */

return (0);
}
