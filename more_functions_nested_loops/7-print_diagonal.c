#include "main.h"

void print_diagonal(int n)
{
	int row;
	int i;

	if ( n > 0 )
	{
		for (row = 0; row < n; row++)
		{
			if (row >= 1)
			{
				for (i = 0; i < row; i++)
				{
					_putchar(' ');
				} 	 
			}
			_putchar(92);
			_putchar('\n');
		}	
	}
}
