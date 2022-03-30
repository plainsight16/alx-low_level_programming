#include "main.h"
/**
  * _strlen_recursion - return length of string
  * @s: char pointer
  * Return: lenght of string
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		n = _strlen_recursion(s + 1);
		return (n += 1);
	}
	return (0);
}
