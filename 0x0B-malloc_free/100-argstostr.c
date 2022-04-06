#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * argstostr - concats args into an arr
  * @ac: args count
  * @av: args vector
  *
  * Return: arr
*/

char *argstostr(int ac, char **av)
{
	int i, j, size, k;
	char *arr;

	size = 0;
	k = 0;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			size++;

	size += ac + 1;
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arr[k] = av[i][j];
			k++;
		}
		arr[k] = '\n';
		k++;
	}
	arr[k] = '\0';

	return (arr);
}
