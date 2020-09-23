#include "holberton.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */

int main(void)
{
	int test;

	test = positive_or_negative(0);
	if (test != 0)
	{
		return (1);
	}

	return (0);
}
