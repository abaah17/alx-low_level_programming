#include <stdio.h>

/**
 * main - outputs all alphabets in lower case excepts q and e
 *
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
		if (alphabet == 'q' || alphabet == 'e')
		{
			continue;
		}
		else
		{
			putchar(alphabet);
		}
	}

	putchar('\n');
	return (0);
}
