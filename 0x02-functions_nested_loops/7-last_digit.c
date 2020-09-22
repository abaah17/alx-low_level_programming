#include "holberton.h"
/**
 * print_last_digit - prints the lest digit
 * @n: parameter
 *
 * Description: prints the last digit
 * Return: Always(0) Success
 */
int print_last_digit(int n)
{
	int lst_digit;

	lst_digit = n % 10;

	if (lst_digit < 0)
	{
		lst_digit *= -1;
	}
	_putchar(lst_digit + '0');
	return (lst_digit);
}
