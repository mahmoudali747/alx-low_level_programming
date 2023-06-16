include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	for (m = 97; m < 123; m++)
	{
		if (m != 101 && m != 113)
		{
			putchar(m);
		}
	}
	putchar('\n');
	return (0);
}
