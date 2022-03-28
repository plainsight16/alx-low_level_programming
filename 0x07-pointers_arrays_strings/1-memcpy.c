#include "main.h"
/**
  * _memcpy - copies memory data
  * @dest: destination pointer
  * @src: src pointer
  * @n: size of memory
  *
  * Return: dest pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
