#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - copies a given string
  * @str: str to copy
  * Return: str
*/

char *_strdup(char *str)
{
	int i = 0;
	int count = 0;
	char *newStr;

	if (str == NULL)
		return (NULL);
	while (count != '\0')
		count++;

	newStr = malloc((sizeof(char)) * count);

	for (; i < count; i++)
		newStr[i] = str[i];

	return (newStr);
}
