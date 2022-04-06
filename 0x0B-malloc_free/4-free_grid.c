#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_grid - frees arr_grid
  * @grid: arr_grid
  * @height: height of arr
*/

void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0 || grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
