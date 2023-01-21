#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets in lowercase 10 times
 *
 */

void print_alphabet_x10(void)
{
	char lower_alpha;

	int count = 0;

	while (count < 10)
	{
		for (lower_alpha = 'a'; lower_alpha <= 'z'; lower_alpha++)
		{
			_putchar(lower_alpha);
		}
		_putchar('\n');
		count++;
	}
}
