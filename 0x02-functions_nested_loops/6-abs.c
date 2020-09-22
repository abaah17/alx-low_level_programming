#include "holberton.h"

/**
 *_abs - prints the absolute value of the parameter
 *@n: parameter passed in the function
 *Description: the function checks if the parameter is absolute
 *Return: Always(0) Success
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else
	{
		n *= 1;
		return (n);
	}
}
