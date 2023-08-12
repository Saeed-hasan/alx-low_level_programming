#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 * Describtion: postive or negative
 * Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("number is positive\n", n);
else if (n == 0)
printf("number is negative\n", n);
else
printf("number is negative\n", n);
return (0);
}
