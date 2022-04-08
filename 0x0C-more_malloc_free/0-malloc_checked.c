#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * malloc_checked - checks malloc
  * @b: int param
*/
void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);
	return (t);
}
