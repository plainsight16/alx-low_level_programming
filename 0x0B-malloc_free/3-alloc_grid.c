#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * alloc_grid - create a 2d array
  * @width: width of array
  * @height: height of array
  *
  * Return: pointer to array
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr_grid = (int **)malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
		return (NULL);

	if (arr_grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr_grid[i] = (int *)malloc(sizeof(int) * width);

		if (arr_grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr_grid[j]);
			}
			free(arr_grid);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr_grid[i][j] = 0;

	return (arr_grid);
}
