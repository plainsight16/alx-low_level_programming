#include "main.h"
/**
  * print_sign - prints the sign of a number
  * @n: Integer param
  * Return: 1 if positive, 0 if zero, -1 if negative
*/
int print_sign(int n)
{
		int sign = 0;

		if (n > 0)
			sign = 1;
		else if (n < 0)
			sign = -1;
		return (sign);
}
