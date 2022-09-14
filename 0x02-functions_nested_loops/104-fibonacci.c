#include <stdio.h>

/**
 * main - Entry point, prints the first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long first = 0;
	unsigned long second = 1;
	unsigned long fib;

	for (count = 0; count < 5; count++)
	{
		fib = first + second;
		printf("%lu, ", fib);
		first = second;
		second = fib;
	}
	printf("\n");
	return (0);
}
