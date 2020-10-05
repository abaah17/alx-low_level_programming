#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first point parameter
 * @accept: second point parameter
 *
 * Description: s & accept are the two strings
 * Return: Always(0) Success
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != NULL)
	{
		j = 0;
		while (accept[j] != NULL)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
