#include "main.h"
/**
  * main - Entry point
  * Return: 0
*/
int main(void)
{
	int a = 0;

	while (a < 101)
	{
		if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		printf("%d", a);
	}
}
