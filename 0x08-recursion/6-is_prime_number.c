#include "holberton.h"

/**
 * is_divisible - checks if a number divisible.
 * @number: The number to be checked.
 * @div: The divisor.
 *
 * Return:  0(if num is divisible)
 *          1(not divisible).
 */
int is_divisible(int number, int div)
{
	if (number % div == 0)
		return (0);

	if (div == number / 2)
		return (1);

	return (is_divisible(number, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: int
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, div));
}
