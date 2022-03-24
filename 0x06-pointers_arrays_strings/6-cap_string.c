#include "main.h"
/**
  * cap_string - capitalize each word in string s
  * @s: string pointer
  * Return: string s pointer
*/
char *cap_string(char *s)
{
	char delimeter[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;

	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (delimeter[j] != '\0')
		{
			if (s[i] == delimeter[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (s);
}
