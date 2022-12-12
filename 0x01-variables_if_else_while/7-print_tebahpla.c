#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints the lowercase alphabet in reverse
 *
 * Retun: Always 0 (Success)
 *
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');

	return (0);
}
