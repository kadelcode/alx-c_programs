#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Return: Always 0
*
*/

int main(void)
{
	int alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);

}
