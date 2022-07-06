#include "main.h"

/**
*prints 10 times the alphabet -> in lowercase
*/
void print_alphabet_x10(void);
{
int h;
int x;
for (x = 0; x < 10 ; x++)
{
for (h = 'a'; h <= 'z'; h++)
{
_putchar(h);
}
_putchar('\n');
}
}
