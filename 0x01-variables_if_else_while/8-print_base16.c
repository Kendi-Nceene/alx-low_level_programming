#include <stdio.h>
#include <stdlib.h>

/**
*main - main Entry
*Description: prints all single digit numbers of base 16
*starting from 0, followed by a new line.
*
*Return:0
*/
int main(void)
{
char base_16;
for (base_16 = 48; base_16 <= 57; base_16++)
{
putchar(base_16);
}
for (base_16 = 97 ; base_16 <= 102; base_16++)
{
putchar(base_16);
}
putchar ('\n');
return (0);
}
