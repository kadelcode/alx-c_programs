#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer
 * Return: n if n >= 0, -n if n < 0
 *
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	if (n < 0)
		return (-(n));
	return (0);
}
