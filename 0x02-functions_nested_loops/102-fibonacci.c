#include <stdio.h>
#include "holberton.h"
/**
 *main - prints the first 50 Fibonacci numbers.
 *
 *Return: 0
 */
int main(void)
{
	long first_number = 1, second_number = 2, next_number;
	int i;

	for (i = 0; i < 50; i++)
	{
		if (i == 49)
		{
			printf("%lu", first_number);
		}
		else
		{
			printf("%lu, ", first_number);
			next_number = second_number + first_number;
			first_number = second_number;
			second_number = next_number;
		}
	}
	printf("\n");
	return (0);
}
