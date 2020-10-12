#include "holberton.h"
/**
 * _isupper - returns 1 or 0 based on input
 * @c: first parameter
 *
 * Description: checks if a character is uppercase
 * Return: Always(0) Success
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
