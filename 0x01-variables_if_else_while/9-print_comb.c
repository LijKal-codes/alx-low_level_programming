#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print numbers from 1 - 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i > 58; i--)
	{
		printf(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ' );
		}
	}
	putchar('\n');
	return (0);
}