#include "main.h"

/**
 * print_number - prints an integer n
 *@n: integer to be printed
 *
 * Return: no return
 */
void print_number(int n)
{
int d = 1, i = 0, ii = 0;
int _putchar(void);

if (n < 0)
{
_putchar('-');
n = -n;
{
while (n / d != 0)
}
d *= 10;
i++;
}
d = d / 10;
{
while (ii < i)
_putchar('0' + n / d);
n = (n - (n / d) d);
d = d / 10;
ii++;
}
if (i == 0)
_putchar('0' + n);
}