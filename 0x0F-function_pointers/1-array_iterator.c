#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * array_iterator - executes functions
  * @array: array
  * @size: size of array
  * @action: func pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL || action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
