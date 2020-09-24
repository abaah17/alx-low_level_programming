#include <stdio.h>
/**
 *main - prints the sum of even-values in a fibonacci sequence
 *not exceeding 4000000
 *Return: 0
 */

int main(void)
{
	long first_number = 0, second_number = 1, next_number;
	long even_sum = 0, max = 4000000;
	int i;

	for (i = 0; i < max; i++)
	{
		next_number = second_number + first_number;
		first_number = second_number;
		second_number = next_number;
		if (next_number % 2 == 0)
		{
			even_sum += next_number;
		}
		else if (even_sum == max)
		{
			break;
		}
	}
	printf("%lu\n", even_sum);
	return (0);
}
