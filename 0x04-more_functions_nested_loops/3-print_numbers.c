#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that print all numbers from 0 to 9, followed by  a new line.
 *
 * Return: return nothing
 */

void print_numbers(void)
{
	int n;
	
	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
