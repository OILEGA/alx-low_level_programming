#include "main.h"
/**
 * _strlen - a function that returns the length of string
 * @s: value to return
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;/* this is where we start our counting from, from 0*/

	for (; *s++;) /* using a for loop to count our 6 strings, s to g*/
		(a++;)/* to run our increment starting from 0*/
	return (a);

}
