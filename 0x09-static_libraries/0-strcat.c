<<<<<<< HEAD
#include "holberton.h"
=======
#include "main.h"
>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5

/**
 * *_strcat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
<<<<<<< HEAD

=======
>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
<<<<<<< HEAD

=======
>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
