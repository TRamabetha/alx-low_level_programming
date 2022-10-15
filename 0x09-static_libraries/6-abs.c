<<<<<<< HEAD
#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 *
 * @n: is an integer argument
 *
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
=======
#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @n: int type number
 * Return: absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
}
