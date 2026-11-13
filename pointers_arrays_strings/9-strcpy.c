#include "main.h"

/**
 * *_strcpy - copies the string pointed to
 * @dest: points to the destination
 * @src: points to the string
 *
 * Return: The pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int length;
	int i;

	length = 0;
	i = 0;

	/*Find value of source*/
	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
