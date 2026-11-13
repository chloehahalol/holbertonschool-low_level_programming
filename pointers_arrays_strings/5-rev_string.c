#include "main.h"

/**
 * rev_strong - reverse a string
 * @s: a string
 */
void rev_string(char *s)
{
	int length;
	int i;
	char temp;

	length = 0;
	i = 0;

	/*Find the length of string*/
	while (s[length] != '\0')
	{
		length++;
	}

	/*Store string into temporary char*/
	while (i < length - 1)
	{
		length--; /*Move down a space*/
		temp = s[i]; /*Store text in temp s[i] is the first char*/
		s[i] = s[length]; /*Store last char in first char */
		s[length] = temp; /*Store first char in last char */ 
		i++; /*Move up a space*/
	}
}
