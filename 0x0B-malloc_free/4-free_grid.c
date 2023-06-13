#include <stdlib.h>
/**
*free_grid - Frees a 2D grid of integers.
*@grid: Pointer to the grid to be freed.
*@height: Height of the grid.
*Return: Nothing.
*/
void free_grid(int **grid, int height)
{
int row;
for (row = 0; row < height; row++)
free(grid[row]);
free(grid);
}

