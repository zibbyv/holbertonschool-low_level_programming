#include <stdio.h>
#include "main.h"

/**
* swap_int - swap two pointer values
* @a: integer
* @b: integer
*/

void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
