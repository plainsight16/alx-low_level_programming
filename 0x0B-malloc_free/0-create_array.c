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
	char *array = malloc((sizeof(char)) * (size + 1));
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);
	if (array == NULL)
		return (NULL);

	for (; i < size; i++)
	{
		array[i] = c;
	}

	array[i] = '\0';
	return (array);
}
