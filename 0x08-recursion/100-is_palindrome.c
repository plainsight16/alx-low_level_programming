#include "main.h"
/**
  * length - returns str len
  * @s: char pointer
  * Return: len
*/
int length(char *s)
{
	int i = 0;

	if (*s)
	{
		i = length(s + 1);
		return (i + 1);
	}
	return (0);
}
/**
  * helper - helps main func
  * @s: char pointer
  * @i: integer
  *
  * Return: 1 || 0
*/
int helper(int i, char *s)
{
	if (*s)
	{
		if (*s != s[length(s) - i])
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

