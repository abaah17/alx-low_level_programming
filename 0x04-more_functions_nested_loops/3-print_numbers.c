#include "holberton.h"
/**
 * print_numbers - prints numbers from 0-9
 * Description:
 * Return: Always(0) Success
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
}