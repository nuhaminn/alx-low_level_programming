#include "main.h"

/**
 * _strlen - Entry point
 * @s: string
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
