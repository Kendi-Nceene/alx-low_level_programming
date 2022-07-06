#include <stdio.h>

/**
* main - prints Putchar
*
*Description: prints _putchar
*
* Return:0 (success)
*/
int main(void)
{

char *sh = "_putchar";
while (*sh)
{
putchar(*sh);
sh++;
}
putchar('\n');

return (0);

}
