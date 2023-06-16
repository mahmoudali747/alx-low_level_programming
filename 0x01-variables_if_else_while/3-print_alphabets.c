
#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int m;

	for (m = 0; m < 52; m++)
	{
		putchar(alpha[m]);
	}
	putchar('\n');
	return (0);
}
