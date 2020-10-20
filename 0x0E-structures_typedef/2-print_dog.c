#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Prints a struct dog
 * @d: first parameter
 *
 * Description: function that prints a struct dog
 * Return: Always(0) Success
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if ((*d).name == NULL)
	{
		(*d).name = "(nil)";
	}

	if ((*d).owner == NULL)
	{
		(*d).owner = "(nil)";
	}

	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
