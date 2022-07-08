#include "main.h"

/**
 * print_most_numbers - print numbers
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
char n = 0;
while (n <= 9)
{
_putchar('0' + n);
n++;
}
_putchar('\n');
}
