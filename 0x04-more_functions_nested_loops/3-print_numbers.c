#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Description: print the numbers from 0 to 9, followed by  a new line.
 *
 * Return: Always (0)
 */

void print_numbers(void)
{
	char n;
	
	for (n = 0; n < 9; n++)
	{
		_putchar(n + '0);
	}
	_putchar('\n');
}
