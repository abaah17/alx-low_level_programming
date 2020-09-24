#include "holberton.h"
/**
 * print_line - Print line dependent on the input
 * @n : The number of '_' characters
 * Return: Void.
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
