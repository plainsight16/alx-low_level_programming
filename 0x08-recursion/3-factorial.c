#include "main.h"
/**
  * factorial - returns factorial
  * @n: give number
  * Return: factorial
*/
int factorial(int n)
{
	if (n < 1)
		return (1);
	return (n * factorial(n += -1));
}
