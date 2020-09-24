#include "holberton.h"
/**
 * _isupper - checks if the parameter is uppercase
 * @c: character to be checked by function
 * Description:
 * Return: Always(0) Success
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
