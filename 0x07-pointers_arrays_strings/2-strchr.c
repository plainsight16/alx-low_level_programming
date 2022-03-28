#include "main.h"
/**
  * _strchr - locates a char in a string
  * @s: string pointer
  * @c: char to be found
  *
  * Return: char pointer || NULL
*/
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (0);
}
