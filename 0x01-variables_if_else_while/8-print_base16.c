#include <stdio.h>

/**
 * main - outputs base 16 numbers
 *
 *
 *
 *
 * Return: the integer(0 success)
 */

int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (number = 'a'; number <= 'f'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
