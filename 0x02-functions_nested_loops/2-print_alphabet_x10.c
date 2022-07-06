#include "main.h"

/**
*print_alphabet_x10 -> print the lowercase alphabet
*/
void print_alphabet_x10(void)
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
