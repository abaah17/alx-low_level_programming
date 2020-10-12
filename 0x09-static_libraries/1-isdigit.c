#include "holberton.h"
/**
 * _isdigit - checks if the parameter is a digit
 * @c: character to be checked by function
 * Description:
 * Return: Always(0) Success
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
