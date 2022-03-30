#include "main.h"
/**
  * helper - helps main func
  * @s: char pointer
  * Return: 1 || 0
*/
int helper(int i, char *s)
{
	if (*s)
	{
		if (*s != s[_strlen_recursion(s) - i])
		{
			return (0);
		}
		else
		{
			helper(i + 1, s + 1);
		}
	}
	return (1);
}
/**
  * is_palindrome - checks if palindrome
  * @s: char pointer
  * Return: 1 if true else 0
*/
int is_palindrome(char *s)
{
	int i = 1;

	return (helper(i, s));
}

