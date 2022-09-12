#include <stdio.h>
/**
 * main -mainblock
 * Description: prints all single digits numbers of base 1-
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int c = 48;

	while (c < 58)
	{
		putchar(c);
		c++;
	}

	putchar(10);

	return (0);
}
