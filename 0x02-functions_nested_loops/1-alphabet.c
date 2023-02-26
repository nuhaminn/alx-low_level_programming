#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 * Retun: On success 1
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
