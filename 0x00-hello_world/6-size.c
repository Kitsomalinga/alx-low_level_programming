#include <stdio.h>

/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */

int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("size of an int: %zu bytes(s)\n", sizeof(int));
printf("size of a long int: %zu bytes(s)\n", sizeof(long int));
printf("size of a long long int: %zu bytes(s)\n", sizeof(long long int));
printf("size of a float: %zu bytes(s)\n", sizeof(float));
return (0);
}
