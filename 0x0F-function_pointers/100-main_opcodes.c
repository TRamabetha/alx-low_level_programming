#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 * @a: address of the main function
 * @n: number of bytes to print
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%.2x", (unsigned char)(*a));
}
printf("\n");

}

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: O
 */
int main(int argc, char **argv)
{
int num_bytes;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0) 
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, num_bytes);
return (0);
}
