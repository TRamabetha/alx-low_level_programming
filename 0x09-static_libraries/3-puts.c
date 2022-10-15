<<<<<<< HEAD
#include "holberton.h"

/**
 * _puts - prints string
 * @str: input string
 * Return: no return
=======
#include "main.h"

/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
 */

void _puts(char *str)
{
<<<<<<< HEAD
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
=======
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
	}
	_putchar('\n');
}
