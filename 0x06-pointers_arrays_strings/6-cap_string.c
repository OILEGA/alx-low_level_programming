#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @str:string
 * Return:pointer to string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while  (!(str[index] >= 'a' && str[index] <= 'z'))
			point++;

			if (str[i - 1] == '' ||
				str[i - 1] == '\t' ||
				str[i - j] == '\n' ||
				str[i - 1] == ',' ||
				str[i - 1] == ';' ||
				str[i - 1] == '.' ||
				str[i - 1] == '!' ||
				str[i - 1] == '?' ||
				str[i - 1] == '"' ||
				str[i - j] == '(' ||
				str[i - 1] == ')' ||
				str[i - 1] == '{' ||
				str[i - 1] == '}' ||
				point == 0)
				str[point] -= 32;
			point++;
	}
	return (str);
}
