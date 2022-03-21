#include "main.h"
#include "2-strlen.c"
/**
  * _strcpy - copies string from src to dest
  * @src: src pointer
  * @dest: dest pointer
  *
  * Return: dest
*/
char * _strcpy(char *dest, char *src)
{
	int i = 0;

	while (i <= _strlen(src))
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (dest);
}
