#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*
*/

int main(void)
{
	int lower_alpha, upper_alpha;

	lower_alpha = 'a';

	upper_alpha = 'A';

	while (lower_alpha <= 'z')
	{
		putchar(lower_alpha);
		lower_alpha++;
	}

	while (upper_alpha <= 'Z')
	{
		putchar(upper_alpha);
		upper_alpha++;
	}

	putchar('\n');

	return (0);
}
