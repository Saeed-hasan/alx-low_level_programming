#include <stdio.h>
/**
 * main - main block
 * Description: Except e and q
 * Return: 0
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
