#include "main.h"
/**
  * _isaplha - checks if param is an alphabet
  * @c: An Integer param
  * Description: checks if param is an alphabet
  * Return: 1 if true, 0 if false
*/
int _isalpha(int c)
{
	int isalpha = 0;

	if (c >= 'A' && c <= 'Z')
		isalpha = 1;
	else if (c >= 'a' && c <= 'z')
		isalpha = 1;
	return (isalpha);
}
