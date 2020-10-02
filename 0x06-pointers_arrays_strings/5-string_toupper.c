#include "holberton.h"
/**
 * string_toupper - checks if a letter is upper case then converts it
 * @s: first pointer parameter
 *
 * Return: Always(0) Success
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
		{
			s[i] = (s[i] - 32);
		}
		i++;
	}
	return (s);
}
