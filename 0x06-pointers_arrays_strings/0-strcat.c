#include "main.h"
/**
  * _strcat - concatenates two strings
  * @dest: destination string
  * @src: source string
  *
  * Return: dest pointer
*/
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		dest++;
		src++;
		*dest = *src;
	}	
	dest++;
	*dest = '\0';
	return (dest);
}
