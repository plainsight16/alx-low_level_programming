#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * array_range - creates an Intgeger array
  * @min: some num
  * @max: some num
  * Return: intgere pointer
*/
int *array_range(int min, int max)
{
	int i;
	int *t;
	int len;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		len++;
	t = malloc(sizeof(int) * len);
	if (t == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		t[i] = min;
		i++;
		min++;
	}
	return (t);
}
