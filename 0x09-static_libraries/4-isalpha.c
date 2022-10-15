<<<<<<< HEAD
#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 *
 * @c: is c an integer argument
 *
 * Return: Always 0.
=======
#include "main.h"
/**
 * _isalpha - Check if character is a alphabet character.
 * @c: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
 */

int _isalpha(int c)
{
<<<<<<< HEAD

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
=======
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
}
