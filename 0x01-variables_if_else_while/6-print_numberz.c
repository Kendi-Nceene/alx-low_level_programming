#include <stdio.h>

/**
*main -Entry point
*Description: prints all single digit numbers of base 10
*starting from 0, followed by a new line.
*
*Return: Always 0 (success/corect)
*/
int main(void)
{
int i;
for (i = 48 ; i <= 57; i++)
{
putchar (i);
}
putchar ('\n');
return (0);
}