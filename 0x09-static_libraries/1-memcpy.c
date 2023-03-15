#include "main.h"

/**
 * _memcpy - Entry pont
 * @dest: para1
 * @src: para2
 * @n: number
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
