#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * display_menu - displays calculator menu.
 */
void display_menu(void)
{
	printf("1) Add\n"
		"2) Subtract\n"
		"3) Multiply\n"
		"4) Divide\n"
		"0) Quit\n");
}

/**
 * main - a simple calculator. 
 * 
 * Return: 0 on success. 
 */
int main(void)
{
	char num;
	int number;

	printf("Simple Calculator\n");	

	display_menu();
	scanf(" %c", &num);
	number = num - '0'; 	

	if (number != 0)
	{
		while (number != 0)
		{
			if (num == 1)
			{
				printf(	"Choice: 1\n");
			}
			else if (num == 2)
			{
				printf(	"Choice: 2\n");
			}
			else if (num == 3)
			{
				printf(	"Choice: 3\n");
			}
			else if	 (num == 4)
			{
				printf(	"Choice: 4\n");
			}
			else if (num > 4)
			{	
				printf("Invalid choice.\n");
			}
			display_menu();
			scanf(" %c", &num);
			number = num - '0';	
		}
	}
	else if (number == 0)
	{
		printf(	"Choice: 0\n"
			"Bye!");
		exit(0);
	} 
	return (0);
} 
