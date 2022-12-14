#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;
	int L;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	L = n % 10;
	if (L > 5)
	{
		printf("%d and is greater than 5\n", L);
	}
	else if (L == 0)
	{
		printf("%d and is 0\n", L);
	}
	else if (L < 6)
	{
		printf("%d and is less than 6 and not 0\n", L);
	}
	return (0);
}
