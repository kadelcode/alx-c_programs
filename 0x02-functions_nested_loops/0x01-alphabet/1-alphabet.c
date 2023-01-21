#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	int lower_alpha = 'a';

	while (lower_alpha <= 'z')
	{
		_putchar(lower_alpha);
		lower_alpha++;
	}
}
