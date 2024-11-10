#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element
 * @size: the number of rows/columns
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;

/* loop through each row */
for (i = 0; i < size; i++)
{
/* sum for top-left to bottom-right */
sum1 += a[i * size + i];
/* Sum for top-right to bottom-left */
sum2 += a[i * size + (size - 1 - i)];
}

/* print both diagonal sums */
printf("%d, %d\n", sum1, sum2);
}
