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
	while (i < length)
	{
		length--;
		temp = s[i]; /*Store text in temp s[i] is the first char*/
		s[i] = s[length]; /*Store last char in first char */
		s[length] = temp; /*Store */
		i++;
}
