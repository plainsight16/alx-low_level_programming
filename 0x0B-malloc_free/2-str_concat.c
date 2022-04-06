#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * str_concat - concats string
  * @s1: first string
  * @s2: second string
  *
  * Return: concat string
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int len1, len2;
	char *concat;

	i = 0;
	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (i = 0; i < len2; i++)
		concat[i + len1] = s2[i];

	concat[i + len1] = '\0';
	return (concat);
}
