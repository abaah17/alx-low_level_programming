#include <stdio.h>
/**
 * main - prints 1-100 and if a number divisible.
 *        by 3 you print fizz and buzz for a number
 *        divisible by 5. And Fizzbuzz for both.
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
