#include "holberton.h"

/**
 * _isalpha - checks if the parameter is an alphabet
 * @c: character to be checked by function
 * Description:
 * Return: Always(0) Success
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
