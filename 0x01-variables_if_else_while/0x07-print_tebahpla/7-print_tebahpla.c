#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry
* Return - Always 0
*
*/

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
