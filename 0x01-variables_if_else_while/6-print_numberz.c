#include <stdio.h>

/**
 * main - outputs all numbers to 9(base 10)
 * consideration - using putchar
 *
 *
 *
 * Return: the integer(0 success)
 */

int main(void)
{
	int number;

	for (number = 0 ; number < 10 ; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return (0);
}
