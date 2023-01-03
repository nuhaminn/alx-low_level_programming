#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: int1 to swap
 * @b: int2 to swap
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
