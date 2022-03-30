#include "main.h"
/**
  * factorial - returns factorial
  * @n: give number
  * Return: factorial
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
  if (n > 0)
    return (n * factorial(n - 1));
  return (1);
}
