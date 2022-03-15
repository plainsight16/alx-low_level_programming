#include "main.h"
/**
  * _islower - checks if param is a lowercase alphabet
  * @c: An integer
  * Return: 1 if true and 0 if false
 */
int _islower(int c)
{
	int lower = 0;

	if (c >= 'a' && c <= 'z')
		lower = 1;
	return (lower);
}
