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
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}	
	dest[i + j] = '\0';
	return (dest);
}
