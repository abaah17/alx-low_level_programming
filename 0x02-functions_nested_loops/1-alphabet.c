#include "holberton.h"
/**
 * print_alphabet - prints all aphabets in lowercase
 *
 *
 *
 */

void print_alphabet(void)
{
	int i = 0;
	char alphabet;

	while (i < 10)
	{
		alphabet = 'a';
		while (alphabet <= z)
		{
			_putchar(alphabet);
			alphabet++;
		}
		i++;
		_putchar('\n');
	}
}
