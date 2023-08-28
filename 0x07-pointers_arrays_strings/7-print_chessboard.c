#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard.
 * @a: 2D array representing the chessboard.
 *
 * Description: This function prints the given 2D array as a chessboard.
 */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
