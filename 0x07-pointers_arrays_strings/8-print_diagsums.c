#include "main.h"
/**
  * print_diagsums - pritns the sum of diagonals
  * @a: pointer
  * @size: size
*/
void print_diagsums(int *a, int size)
{
	int i;
	int d1 = 0;
	int d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[(i * size) + i];
		d2 += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n" d1, d2);
}
