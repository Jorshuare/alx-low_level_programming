#include "main.h"

/**
 * main - check the code.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c, i;


	for (i = 0; i < 11; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{

			_putchar(c);
		}
	}
	_putchar('\n');
}
