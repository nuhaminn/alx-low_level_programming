#include "main.h"
#include <string.h>

/**
 * _strncat -> function to append some char
 * @dest: para1
 * @src: para2
 * @n: para3
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
