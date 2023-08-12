#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - main function
* Describtion: last digit
* Return:0
*/
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (last > 5)
printf("the last digit of %d is %i and is greater than 5\n", n, last);
else if (last < 6)
printf("the last digit of %d is %i and is less than 6 and not 0\n", n, last);
else if (last == 0)
printf("the last digit of %d is %i and is 0\n", n, last);
return (0);
}
