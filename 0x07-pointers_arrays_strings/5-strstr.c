#include "holberton.h"
/**
 * _strstr - locate string
 * @haystack: input string
 * @needle: input needles
 *
 * Description:
 * Return: returns a pointer to the
 * beginning of the located substring, else, NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *fst_str, *check;

	while (*haystack)
	{
		fst_str = haystack;
		check = needle;
		while (*haystack && *check && *haystack == *check)
		{
			haystack++;
			check++;
		}
		if (!*check)
		{
			return (fst_str);
		}
		else
		{
			haystack = fst_str + 1;
		}
	}
	return (NULL);
}
