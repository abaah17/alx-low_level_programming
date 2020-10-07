#include "holberton.h"

/**
 * _pow_recursion - returns x raised to power y.
 * @x: number.
 * @y: power.
 * Description: returns the power of a number
 * Return: the value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	int ans = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	ans *= _pow_recursion(x, y - 1);

	return (ans);
}
