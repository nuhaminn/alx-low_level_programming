#include "main.h"

/**
 * _isalpha - Entry Point
 * @c: char
 * Return: 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
