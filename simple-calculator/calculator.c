#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * display_menu - displays calculator menu.
 */
int display_menu(void)
{
	int num;
 		
	num = 0;

	printf("Simple Calculator\n");	
	printf("1) Add\n"
		"2) Subtract\n"
		"3) Multiply\n"
		"4) Divide\n"
		"0) Quit\n");	
	
	scanf(" %d", &num); 
	
	return (num);
}

/**
 * function_name - description
 * @parameter: description
 *
 * Return: description
 */
int add(int a, int b)
{
	return (a + b);
}

int subtract(int a, int b)
{		
	return (a - b);	
}

int multiply(int a, int b)
{
	return (a * b);	
}

int divide(int a, int b)
{
	return(a / b);	
}

/**
 * main - a simple calculator. 
 * 
 * Return: 0 on success. 
 */
int main(void)
{
	int num;
	int a;
	int b;
	int result;

	num = display_menu();

	while (num != 0)
	{
		printf("Choice: %d\n", num);
		printf("A: ");
		scanf("%d", &a);
		printf("B: ");
		scanf("%d", &b);

		if (num == 1)
		{
			result = add (a, b);
		}
		else if (num == 2)
		{
			result = subtract(a,b);
		}
		else if (num == 3)
		{
			result = multiply(a,b);
		}
		else if (num == 4)
		{
			if (b == 0)
			{
				printf("Error: division by zero");
			}
			else 
			{
				result = divide(a,b);
			}
		}

		printf("Result: %d\n", result);
		num = display_menu();
	}

	printf(	"Choice: 0\n"
		"Bye!");
	return (0);
} 
