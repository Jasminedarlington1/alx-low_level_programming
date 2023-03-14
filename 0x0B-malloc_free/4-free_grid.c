#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees two dimensional grid previously
 * created by your alloc_grid function
 * @grid: pointer to pointer
 * @height: input
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
