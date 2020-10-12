#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: prints all arguments
 * Return: Always(0) Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
