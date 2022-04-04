#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define UNUSED(x) (void)(x)

/**
  * StringCheck - checks if str
  * @s: string pointer
  * Return: 0 if false, 1 if true
*/

int StringCheck(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] < 48 || s[i] > 57)
		{
			return (0);
		}
	}
	return (1);
}

/**
  * main - main func
  * @argc: arg count
  * @argv: arg vector
  *
  * Return: 0
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		if (StringCheck(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
