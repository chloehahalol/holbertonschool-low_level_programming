#include <stdio.h>

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
 * choice - asks user what function they would
 * like to do.
 * @num: option chosen
 */
void choice(int num)
{	
	if (num == 1)
	{
		printf(	"Choice: 1");
	}
	else if (num == 2)
	{
		printf(	"Choice: 2");
	}
	else if (num == 3)
	{
		printf(	"Choice: 3");
	}
	else if (num == 4)
	{
		printf(	"Choice: 4");
	}
	else if (num == 0)
	{
		printf(	"Choice: 0"
			"Bye!");
	}
	else 
	{
		printf(	"That's not an option."
			"Please try again.");
	}
}

/**
 * main - a simple calculator. 
 * 
 * Return: 0 on success. 
 */
int main(void)
{
	printf("Simple Calculator\n");
	display_menu();
	return (0);
} 
