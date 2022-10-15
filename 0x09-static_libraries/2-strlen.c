<<<<<<< HEAD
#include "holberton.h"

/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
=======
#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input stringeturn.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
}
