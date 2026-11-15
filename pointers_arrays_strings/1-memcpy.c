#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination to copy to
 * @src: copying from
 * @n: number of bytes to copy
 *
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
