#include <stdio.h>
/**
 *main - prints the first 50 Fibonacci numbers.
 *
 *Return: 0
 */
int main(void)
{
	int i;
	int index_1 = 1;
	int index_2 = 2;
	int next_index;

	for (i = 1; i <= 50; ++i)
	{
		printf("%d, ", index_1);
		next_index = index_1 + index_2;
		index_1 = index_2;
		index_2 = next_index;
	}
	printf("\n");
	return (0);
}
