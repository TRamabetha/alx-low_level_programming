<<<<<<< HEAD
#include "holberton.h"

/**
 * _strcmp - compare
 * @s1 : pointerto char params
 * @s2 : pointer to char params
 * Return: *dest
=======
#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
 */

int _strcmp(char *s1, char *s2)
{
<<<<<<< HEAD
	int i;
	int R;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	R = s1[i] - s2[i];
	return (R);
=======
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
}
