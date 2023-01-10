#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string digit
 * @str:array str
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int count;  /*declaring variables */
	count = 0;

	while (count < strlen(str)) /* count string */
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main -print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/*declaring variables */

	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc) /* goes through the whole array */
	{
		if (check_num(argv[count]))
		{
		str_to_int = atoi(argv[count]); /* atoi - converts string to int */
		sum += str_to_int;
		}
		/* condition if one of the number contains symbols that are not digits */
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
