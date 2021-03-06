#include "main.h"
/**
  * _strncpy - copies n chars from string src to string dest
  * @dest: dest string
  * @src: src string
  * @n: length of string copied
  *
  * Return: dest pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
