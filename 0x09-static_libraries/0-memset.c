<<<<<<< HEAD
#include "holberton.h"

/**
 * _memset - ironnou
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */

=======
#include "main.h"
/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
<<<<<<< HEAD
	{
		s[i] = b;
	}
=======
		*(s + i) =  b;

>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
	return (s);
}
