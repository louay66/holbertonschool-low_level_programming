#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - print chessbord
 *@: tow dimensionel array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, b;

	for (i = 0 ; i < 8 ; i++)
	{
		for (b = 0 ; b < 8 ; b++)
		{
			_putchar(a[i][b]);
		}
		_putchar('\n');
	}
}
