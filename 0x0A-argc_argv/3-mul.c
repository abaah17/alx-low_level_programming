#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints product of two numbers
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: prints product of two numbers
 * Return: Always(0) Success
 */
int main(int argc, char *argv[])
{
	int x;
	int num1, num2, product;
	char error[10] = "Error";

	if (argc != 3)
	{
		printf("%s\n", error);
		return (1);
	}
	while (x < argc)
	{
		num1 = atoi(*(argv + 1));
		num2 = atoi(argv[2]);
		x++;
	}
	product = num1 * num2;
	printf("%d\n", product);

	return (0);
}
