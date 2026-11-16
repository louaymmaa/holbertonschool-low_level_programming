#include <stdio.h>
/**
 * sum_to_n - sum all number from 1 to n
 * @n: number passed to have sum from 1 to it
 *
 * Return: n
 */

int sum_to_n(int n)
{
    int i;
    int sum = 0;

    for (i = 1; i <= n; i++)
        sum += i;

    return (n);
}

/* -- DO NOT Modify the code below this line -- */

int main(void)
{
    printf("%d\n", sum_to_n(10));
    return 0;
}
