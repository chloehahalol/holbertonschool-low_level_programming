#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array of elements
 * @nmemb: the number of elements
 * @size: size of each elemen
 *
 * Return: returns a pointer to the allocated memrmoy
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *store;
	unsigned int i;

	i = 0;

	/*Check if inputs are 0*/
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/*Allocate memory*/
	store = malloc(nmemb * size);

	if (store == 0)
	{
		return (NULL);
	}

	while (i < (nmemb * size))
	{
		store[i] = 0;
		i++;
	}
	return (store);
}
