#include "holberton.h"
/**
 * print_alphabet - prints all aphabets in lowercase
 *                  10X
 *
 *
 */

void print_alphabet_x10(void)
{
	char start_alphabet = 'a', end_alphabet;
	while (start_alphabet < 'k')
	{
		end_alphabet = 'a';
		while (end_alphabet <= 'z')
		{
			_putchar(end_alphabet);
			end_alphabet++;
		}
		_putchar('\n');
		start_alphabet++ ;
	}
}
