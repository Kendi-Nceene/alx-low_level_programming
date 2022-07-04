#include <stdio.h>

/**
*main - main block
*Description: Get a random number and check its last digit, compare it with 5
*
*Return: 0
*/
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;
else if (alphabet == 'e')
continue;
putchar(alphabet);
}
putchar('\n');
return (0);
}
