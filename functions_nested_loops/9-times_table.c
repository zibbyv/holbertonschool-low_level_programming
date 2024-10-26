#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int x = 0;
	int y;
	int n;

	while (x < 10)
	{
		y = 0;

		while (y < 10)
		{
		n = x * y;

			if (n < 10)
			{
			if (y != 0)

			_putchar(' ');
			_putchar('0' + n);
			}
				else
				{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
				}

				if (y < 9)
					{
					_putchar(',');
					_putchar(' ');
					}

					y++;
		}

				_putchar('\n');
				x++;
	}
}
