#include "main.h"
#include <stdio.h>

/**
* reverse_array - reverse an array
* @a: array
* @n: number of elements
* Return: the difference
*/
void reverse_array(int *a, int n)
{
int temp;
int i;

/* loop to swap elements from the start */
for (i = 0; i < n / 2; i++)
{
temp = a[i];             /* store current element in temp */
a[i] = a[n - 1 - i];     /* swap element from end */
a[n - 1 - i] = temp;     /* assign temp value to other end */
}
}
