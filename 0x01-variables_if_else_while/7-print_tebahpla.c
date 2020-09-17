#include <stdio.h>

/**
 * main - outputs reverse of alphabets
 *
 *
 *
 *
 * Return: the integer(0 success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
