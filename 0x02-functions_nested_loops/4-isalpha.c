#include "main.h"

/**
 * _isalpha - checks for alphabetical letters
 * @c: character
 * Return: returns 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
