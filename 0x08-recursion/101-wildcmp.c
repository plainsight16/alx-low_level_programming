#include "main.h"
/**
  * wildcmp - compares two strings
  * @s1: char pointer
  * @s2: char pointer
  *
  * Return: 1 if true || 0 if false
*/
int wildcmp(char *s1, char *s2)
{
	int result = 1;

	if (*s1)
	{
		if (*s1 != *s2)
		{
			return (0);
		}
		else
		{
			result = wildcmp(s1 + 1, s2 + 1);
		}
	}
	return (result);
}
