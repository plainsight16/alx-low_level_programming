#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - assigns an array with a char
  * @size: size of array
  * @c: char
  *
  * Return: arr || NULL
*/

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *array = malloc((size_of(char)) * (size + 1));
	int i = 0;

	for (; i < size; i++)
	{
		array[i] = c;
	}

	array[i] = '\0';
	return (array);
}
