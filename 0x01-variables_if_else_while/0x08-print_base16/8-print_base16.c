#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point (prints all the numbers of base 16 in lowercase, followed by a new line
* Return: Always 0
*
*/


int main(void)
{
	int num;

	char alpha;

	for (num = 48; num <= 57; num++)
		putchar(num);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
