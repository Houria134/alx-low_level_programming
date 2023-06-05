#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Print the chessboard
 * @a: chessboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int h, k;
for (h = 0; h < 8; h++)
{
for (k = 0; k < 8; k++)
{
putchar(a[h][k]);
}
putchar('\n');
}
}
