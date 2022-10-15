<<<<<<< HEAD
#include "holberton.h"

/**
 * _islower - check the code for Holberton School students.
 *
 * @c:  is a parameter
 *
 * Return: Always 0.
=======
#include "main.h"

/**
 * _islower - prints 1 or 0 depending on input
 * @c: first parameter
 *
 * Description: prints all lowercase letters
 * Return: Always(0).
>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
 */

int _islower(int c)
{
<<<<<<< HEAD
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
=======
	return (c >= 'a' && c <= 'z');
>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
}
