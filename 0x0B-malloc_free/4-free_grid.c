#include <stdlib.h>

/**
* free_grid - function to free a 2 dimensional array
* @grid: name of 2 dimensonal array
* @height: heigth of 2 dimensional array
* Return: nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
