#include "main.h"
/**
  * cap_string - capitalize each word in string s
  * @s: string pointer
  * Return: string s pointer
*/
char *cap_string(char *s)
{
	char delimeter[] = " \t\n,;.!?\"(){}";
	int i, j;

	if (s[0] >= 97 && s[0] <= 122)
		s[0] = s[0] - 32;
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (delimeter[j] != '\0')
		{
			if (s[i] == delimeter[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
			j++;
		}
		i++;
	}
	return (s);
}
