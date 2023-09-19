#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: swap a
 * @b: swap b
 *
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
