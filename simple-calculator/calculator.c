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

int add(int a, int b)
{
		printf("Choice: 1\n");
		
		printf("A: ");
		scanf("%d", &A);
		printf("B: ");
		scanf("%d", &B);
		
		result = A + B;
		
		printf("Result: %d\n", result);
		
		return (result);

}

int subtract()
{
}

int muptiply()
{
}

int divide()
{
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

	printf("Simple Calculator\n");	

	display_menu();
	scanf(" %d", &num); /*Scans user input*/

	if (number != 0)
	{
		while (number != 0)
		{
			if (number == 1)
			{
				printf("Choice: 1\n");
				printf("A: ");
				scanf("%d", &A);
				printf("B: ");
				scanf("%d", &B);
				result = A + B;
				printf("Result: %d\n", result);
			}
			else if (number == 2)
			{
				printf(	"Choice: 2\n");	
				printf("A: ");
				scanf("%d", &A);
				printf("B: ");
				scanf("%d", &B);
				result = A -  B;
				printf("Result: %d\n", result);
			}
			else if (number == 3)
			{
				printf(	"Choice: 3\n");	
				printf("A: ");
				scanf("%d", &A);
				printf("B: ");
				scanf("%d", &B);
				result = A*B;	
				printf("Result: %d\n", result);
			}
			else if	 (number == 4)
			{
				printf(	"Choice: 4\n");	
				printf("A: ");
				scanf("%d", &A);
				printf("B: ");
				scanf("%d", &B);
				if (B == 0)
				{
					printf("Error: division by zero\n");
				}
				else
				{
					result = A/B;
					printf("Result: %d\n", result);
				}	
			}
			else
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
