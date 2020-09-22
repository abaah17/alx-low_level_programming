#include "holberton.h"

/**
 * print_alphabet_x10 - prints all aphabets in lowercase
 *                  10X
 *
 *
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i = 0;

	while (i < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			putchar(alphabet);
			alphabet++;
		}
		i++;
		_putchar('\n');
	}
}
