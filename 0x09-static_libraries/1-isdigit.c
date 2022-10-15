<<<<<<< HEAD
#include "holberton.h"

/**
 * _isdigit - check the code for Holberton School students.
 *
 * @c: is an integer param
 *
 * Return: Always 0.
 */


int _isdigit(int c)
{

	return (c >= 48 && c <= 57);
=======
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
}
