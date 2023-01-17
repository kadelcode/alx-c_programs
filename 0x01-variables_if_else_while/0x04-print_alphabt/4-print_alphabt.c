#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point (prints all lower case alphabets
* 	 Except letters q and e
* Return: Always 0 (Success)
*
*/

int main(void)
{
	char lower_alpha;

	for (lower_alpha = 'a'; lower_alpha <= 'z'; lower_alpha++)
	{
		if (lower_alpha == 'q' || lower_alpha == 'e')
			continue;
		putchar (lower_alpha);
	}
	putchar ('\n');

	return (0);
}
