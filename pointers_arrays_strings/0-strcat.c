#include "main.h"

/**
 * *_strcat - adds two strings together
 * @dest: where to add the string
 * @src: the string being added
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int length_of_dest;
	int i;

	length_of_dest = 0;
	i = -1;

	while (dest[length_of_dest] != '\0')
	{
		length_of_dest++;
	}

	do
	{
		i++;
		dest[length_of_dest + i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
