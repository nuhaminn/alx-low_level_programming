#include "main.h"
#include <string.h>

/**
 * _strncat -> function
 * @dest: para1
 * @src: para2
 * @n: number
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
