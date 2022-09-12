#include <stdio.h>
/**
 * main -mainblock
 * Description: prints all single digits numbers of base 1-
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	reurn (0);
}
