#include "main.h"
/**
  * _memset - fills memory with a consonant byte
  * @s: memory pointer
  * @b: constant byte
  * @n: size of memory
  * Return: memory pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
