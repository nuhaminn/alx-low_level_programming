#include "main.h"
#include <string.h>

/**
 * puts2 - function should print only one character
 * @str: string to print
 * Return: Always 0
 */

void puts2(char *str)
{
	int len, i;
	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
