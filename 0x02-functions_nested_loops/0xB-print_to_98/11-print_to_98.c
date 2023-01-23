#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - prints a number to 98
 * @n: number to print from
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				break;
			putchar(',');
			putchar(' ');
		}
		printf("\n");
	}

	else if (n == 98)
		printf("%d\n", n);

	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				break;
			putchar(',');
			putchar(' ');
		}
		printf("\n");
	}
}
