#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - block
 * Description: prints all single digit number of base 10
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
char c = 'z';

while (c >= 'a')
{
putchar(c);
c--;
}

putchar('\n');
return (0);
}
