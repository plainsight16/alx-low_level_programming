#include "main.h"
#include <stdio.h>
/**
  * print_array - prints elements of an array of integers
  * @a: array pointer
  * @n: size of array
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		i++;
	}
	printf("\n");
}
