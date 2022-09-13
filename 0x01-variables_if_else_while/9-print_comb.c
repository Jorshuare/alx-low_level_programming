#include <stdio.h>

/**
 * main -prints
 * Return: Always 0 success
 */
int main(void)
{
	int n = 48;

	while (n  < 58)		
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}

	putchar(10);

	return (0);
}	
