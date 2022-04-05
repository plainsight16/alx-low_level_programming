#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * main - main func
  * @argc: arg counter
  * @argv: arg vector
  *
  * Return: 0
*/

int main(int argc, char *argv[])
{
	int coins = 0;
	int money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	while (money > 0)
	{
		if (money % 25 == 0)
			money -= 25;
		else if (money % 10 == 0)
			money -= 10;
		else if (money % 5 == 0)
			money -= 5;
		else if (money % 2 == 0)
			money -= 2;
		else if (money % 1 == 0)
			money -= 1;
		else
			money--;
		coins++;
	}

	printf("%d\n", coins);
	return (0);
}
