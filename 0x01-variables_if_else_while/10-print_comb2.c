#include <stdio.h>

/**
 * main - outputs numbers 00 to 99
 * with space and comma.
 *
 *
 *
 * Return: the integer(0 success)
 */

int main(void)
{
	int number;
	int number1;

	for (number = '0'; number <= '9'; number++)
	{
		for (number1 = '0'; number1 <= '9'; number1++)
		{
			putchar(number);
			putchar(number1);
			if (number == '9' && number1 == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
