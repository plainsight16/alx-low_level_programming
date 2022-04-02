#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - main func
  * @argc: argc count
  * @argv: arg vector
  *
  * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
