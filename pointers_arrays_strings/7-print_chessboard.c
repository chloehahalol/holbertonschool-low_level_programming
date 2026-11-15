#include "main.h"

/**
 * print_chessboard - print a 8x8 chessboard
 * @a: a pointer to a row of 8 characters
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	row = 0;

	/*Print one row*/
	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			_putchar(a[row][col]);
			col++;
		}
		_putchar('\n');
		row++;
	}
}
