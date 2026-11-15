#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * display_menu - displays calculator menu.
 */
int display_menu(void)
{
	printf("Simple Calculator\n");	
	printf("1) Add\n"
		"2) Subtract\n"
		"3) Multiply\n"
		"4) Divide\n"
		"0) Quit\n");	
	scanf(" %d", &num); 
	
	if (num == 0)
	{
		printf(	"Choice: 0\n"
			"Bye!");
		exit(0);
	} 

}

/**
 * function_name - description
 * @parameter: description
 *
 * Return: description
 */
int add(int a, int b)
{
	printf("Result: %d\n", result);
	return (a + b);
}

int subtract(int a, int b)
{		
	printf("Result: %d\n", result);
	return (a - b);	
}

int muptiply(int a, int b)
{
	printf("Result: %d\n", result);
	return (a * b);	
}

int divide(int a, int b)
{
	if (b == 0)
	{
		return("Error: division by zero\n");
	}
	return(a/b);	
}

/**
 * main - a simple calculator. 
 * 
 * Return: 0 on success. 
 */
int main(void)
{
	int num;
	int A;
	int B;
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
			result = multiply(a,b)	
		}
		else if (num == 4)
		{
			result = divide(a,b);
		}

		printf("Result: %d\n", result);
		display_menu();

		}
	}
	if (num == 0)
	{
		printf(	"Choice: 0\n"
			"Bye!");
		exit(0);
	} 
	return (0);
} 
