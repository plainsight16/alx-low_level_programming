#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * helper - helps main func
  * @wordCount: no of words
  * @len: length of string
  * @str: string
  * @arr: arr
  *
  * Return: char value
*/
char **helper(int wordCount, int len, char *str, char **arr)
{
	int i, j, k;

	j = 0;
	for (i = 0; i < wordCount; i++)
	{
		k = 0;
		for (; j < len; j++)
		{
			if (str[0] != ' ' || str[j] != ' ')
			{
				arr[i][k] = str[j];
				k++;
			}
			if (j != 0 && str[j] == ' ' && str[j - 1] != ' ')
			{
				j++;
				break;
			}
		}
		arr[i][k + 1] = '\0';
	}
	arr[wordCount + 1] = NULL;
	return (arr);
}
/**
  * strtow - string to words
  * @str: string param
  * Return: char pointer
 */
char **strtow(char *str)
{
	int i, j, k, wordCount, size;
	char **arr;

	if (str == NULL)
		return (NULL);
	len = 0;
	wordCount = 0;
	for (; str[len] != '\0'; len++)
	{
		if (str[len] == ' ')
			wordCount++;
		if (str[len] != ' ' && str[len - 1] == ' ' && len != 0)
			wordCount++;
	}
	arr = (char **)malloc(sizeof(char *) * wordCount + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < wordCount; i++)
	{
		size = 0;
		for (j = 0; str[j] != '\0'; j++)
		{
			if (str[j] != ' ' || str[0] != ' ')
				size++;
			if (str[j] == ' ' && size > 0)
				break;
		}
		arr[i] = (char *)malloc(sizeof(char) * size + 1);
		if (s[i] == NULL)
		{
			for (k = i - 1; k >= 0; k--)
				free(arr[k]);
			free(arr);
		}
	}
	arr = helper(wordCount, len, str, s);
	return (arr);
}
