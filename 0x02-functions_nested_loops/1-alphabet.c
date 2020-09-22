#include "holberton.h"
/**
 * print_alphabet - prints all aphabets in lowercase
 *
 *
 *
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
