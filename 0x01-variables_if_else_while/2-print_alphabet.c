#include <stdio.h>

/**
 * main - outputs all alphabets in lower case
 *
 *
 *
 * Return: the integer(0 success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
