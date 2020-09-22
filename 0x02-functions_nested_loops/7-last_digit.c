#include "holberton.h"
/**
 *print_last_digit - prints the last digit of the parameter
 *@n: parameter passed in the function
 *Description: the function returns the last digit
 *Return: Always(0) Success
 */
int print_last_digit(int n)
{
	int lst_digit;

	if (n > 0)
	{
		lst_digit = n % 10;
	}
	else
	{
		lst_digit = (n % 10) * -1;
	}
	_putchar(lst_digit + '0');
	return (lst_digit);
}
