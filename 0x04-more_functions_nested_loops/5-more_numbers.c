#include "holberton.h"
/**
 * more_numbers - prints numbers from 0-9
 * except 2 and 4
 * Return: Always(0) Success
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 11)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
