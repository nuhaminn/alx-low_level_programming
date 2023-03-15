#include "main.h"

/**
 * _memset - fill a block of memory
 * @s: memory
 * @b: value
 * @n: number
 * Return: array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
