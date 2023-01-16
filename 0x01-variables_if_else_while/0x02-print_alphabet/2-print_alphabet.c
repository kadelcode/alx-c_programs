#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*
*/

int main(void)
{
	char lower_alpha;

	for (lower_alpha = 'a'; lower_alpha <= 'z'; lower_alpha++)
	{
		putchar (lower_alpha);
	}
	putchar('\n');

	return (0);
}
