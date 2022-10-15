<<<<<<< HEAD
#include "holberton.h"

/**
 * _memcpy - irontnoux2
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size
 * Return: *dest
 */

=======
#include "main.h"
/**
 * _memcpy - copies memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
<<<<<<< HEAD
	{
		dest[i] = src[i];
	}
=======
		*(dest + i) =  *(src + i);

>>>>>>> e4190c280c4c4ae96eab197fa324d8f27d9f1da5
	return (dest);
}
