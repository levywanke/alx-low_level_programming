#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Positive integer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is a zero\n", n);
}
else
{
printf("is negative\n");
}
return (0);
}
