#include <stdio.h>
#include "dog.h"
#include <stdlib.h>


char *copy_string(char *str)
{
	char *copy;
	int i = 0;
	int length = 0;

	/*Figure out length*/
	while (str[length] != '\0')
	{
		length++;
	}

	/*Allocate space*/
	copy = malloc((length + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	/*Copy*/
	while (i <= length)
	{
		copy[i] = str[i];
		i++;
	}

	return (copy);
}

/**
 * new_dog - create a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	/*Name*/
	dog->name = copy_string(name);

	/*Age*/
	dog->age = age;

	/*Owner*/
	dog->owner = copy_string(owner);

	return (dog);
}
