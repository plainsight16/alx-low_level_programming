#include "main.h"
/**
  * _isdigit - checks for a digit
  * @c: Number to be checked
  * Return: 1 if true, 0 if otherwise
*/
int _isdigit(int c)
{
	int isdigit = 0;

	if (c >= '0' && c <= '9')
		isdigit = 1;
	return (isdigit);
}
