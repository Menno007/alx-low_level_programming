#include "main.h"

void print_chessboard(char (*a)[8])
{
	int i;
	int x;

	for (i = 0; i < 8;i++)
	{
		for (x = 0; x < 8; x++)
		{
			putchar(a[i][x]);
		}
		putchar('\n');
	}
}
