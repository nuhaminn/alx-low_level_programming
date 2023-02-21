#include <unistd.h>

/**
 * main - Entry Point
 *
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
