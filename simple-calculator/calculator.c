#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * display_menu - displays the calculator menu
 *
 * Return: the user's choice
 */
int display_menu(void)
{
	int num;
	num = 0;

	printf("1) Add\n"
		"2) Subtract\n"
		"3) Multiply\n"
		"4) Divide\n"
		"0) Quit\n");

	scanf(" %d", &num);

	return (num);
}

/** 
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int  add(int a, int b)
{
      return (a + b);
}

/**
 * subtract - subtracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: subtract a and b
 */
int subtract(int a, int b)
{
      return (a - b);
}

/** 
 * multiply - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: multiplication of a and b
 */
int multiply(int a, int b)
{
      return (a * b);
}

/** 
 * divide - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: division of a and b
 */
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
	int success;

	printf("Simple Calculator\n");

	num = display_menu();

	while (num != 0)
	{
		/*Success is if the calculation was successful*/
		success = 0;

		/*Check if the menu choice is valid*/
		if (num > 0 && num < 5)
		{
			printf("Choice: %d\n", num);

			printf("A: ");
			scanf("%d", &a);

			printf("B: ");
			scanf("%d", &b);

			if (num == 1)
			{
				result = add (a, b);
				success = 1;
			}

			else if (num == 2)
			{
				result = subtract(a,b);
				success = 1;
			}

			else if (num == 3)
			{
				result = multiply(a,b);
				success = 1;
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
					success = 1;
				}
			}

			if (success == 1)
			{
				printf("Result: %d\n", result);
			}

		}
		else
		{
			printf("Invalid choice");
		}

		num = display_menu();
	}

	printf(	"Choice: 0\n");
	printf("Bye!\0");

	return (0);
}
