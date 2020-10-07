#include "holberton.h"
/**
 * factorial - returns the factorial
 * @n: number to be calculated
 * Description: Factorial  recursion function
 * Return: the factorial of the number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
