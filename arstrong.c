#include <stdio.h>
void main()
{
    int n, i, sum = 0;
    printf("entre the number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        n = n % 10;
        sum = sum + n * n * n;
        n = n / 10;
    }
    if (sum == n)
        printf("the %d arstrong", sum);
}