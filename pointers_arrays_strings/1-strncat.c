#include "main.h"

/**
 * *_strncat - concatenates two strings.
 * @dest: destination tring
 * @src: src string
 * @n: number of bytes
 *
 * Return: Returns a pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_of_dest;
	int i;

	length_of_dest = 0;
	i = 0;

	while (dest[length_of_dest] != '\0')
	{
		length_of_dest++;
	}

	while (i < n & src[i] != '\0')
	{
		dest[length_of_dest + i] = src[i];
		i++;
	}

	dest[length_of_dest + i] = '\0';

	return (dest);
}
