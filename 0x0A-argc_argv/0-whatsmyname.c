#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: no of arg
 * @argv: array of arg
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
