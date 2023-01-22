#include "main.h"
#include <stdio.h>

/**
 * times_table - a functions that prints the 9 times table
 *
 */

void times_table(void)
{
	int column = 0;

	int mul;

	while (column <= 9)
	{
		_putchar(0 + '0');

		int row = 1;

		while (row <= 9)
		{
			mul = row * column;

			_putchar(',');
			_putchar(' ');

			if (mul <= 9)
				_putchar(' ');

			else
				_putchar((mul / 10) + '0');

		_putchar((mul % 10) + '0');

			row++;

		}
		column++;

		_putchar('\n');
	}
}
