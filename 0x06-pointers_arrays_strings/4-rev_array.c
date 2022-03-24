#include "main.h"
/**
  * reverse_array - reverses an array of ints
  * @a: array pointer
  * @n: length of array
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int t;

	while (i < n / 2)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}

