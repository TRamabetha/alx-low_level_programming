<<<<<<< HEAD
#include "holberton.h"

/**
 * _strncpy - two words
 * @dest : pointer to char params
 * @src : pointer to char params
 * @n : int params
 * Return: *dest
=======
#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

<<<<<<< HEAD
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
=======
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
	return (dest);
}
