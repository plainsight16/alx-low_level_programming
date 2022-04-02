#include "main.h"
/**
  * _isupper - checks if param is an uppercase alphabet
  * @c: first param
  * Return: 1 if true and 0 if otherwise
*/
int _isupper(int c)
{
	int upper = 0;

	if (c >= 65 && c <= 90)
		upper = 1;
	return (upper);
}
