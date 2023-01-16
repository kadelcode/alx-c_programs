#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - Entry point
* Return: Always 0 (Success)
*
*/
int main(void)
{
	int n, ld_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* last digit of n */
	ld_n = n % 10;

	/* your code goes there */
	if (ld_n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld_n);

	if (ld_n == 0)
		printf("Last digit of %d is %d and is 0\n", n, ld_n);

	if (ld_n < 6 && ld_n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld_n);

	return (0);
}
