#include "holberton.h"
/**
 * _puts_recursion - return the string
 * @s : string
 * Description : returns the string
 * Return: a string ending with a newline
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
