#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * @argc: number of arg
 * @argv: array pf arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
