#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */

int main(void)
/* Main function - outputs lowercase char */
{
char c;
for (c = 'a'; c <= 'z'; ++c)
putchar(c);

putchar('\n');

return (0);
}

