#include "main.h"
/**
  * _abs(int) - Computes the absolute value of an integer
  * @num: Integer param
  * Return: absolute Integer
*/
int _abs(int num)
{
	int absolute;

	if (num >= 0)
		absolute = num;
	else
		absolute = num * -1;
	return (absolute);
}
