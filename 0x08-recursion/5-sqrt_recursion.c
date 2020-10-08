#include "holberton.h"

/**
 * _sqrt - finds natural square root
 * @number: number
 * @root:  natural square root
 * Return: natural square root
 */

int _sqrt(int number, int root)
{
	if (root * root == number)
	{
		return (root);
	}
	if (root * root > number)
	{
		return (-1);
	}
	return (_sqrt(number, root + 1));
}

/**
 * _sqrt_recursion - return the natural square of a number
 * @n: parameter to be operated
 * Return: the natural square of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
