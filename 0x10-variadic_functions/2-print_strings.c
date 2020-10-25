#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string printed between numbers
 * @n: number of parameters
 * Return: Sum of all parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int aux = 0;


	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		aux = va_arg(arg, int);
		if (i < (n - 1) && separator != 0)
			printf("%d%s", aux, separator);
		else
			printf("%d", aux);
	}
	va_end(arg);
	printf("\n");
}
