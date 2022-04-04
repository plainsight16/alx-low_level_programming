#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

	if (argc == 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
