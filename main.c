#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n < 0)
    {
        printf("NG");
        return 0;
    }

    long long total = 0;
    for (int i = 1; i <= n; i++)
    {
        total += i;
    }

    printf("%lld", total);
    return 0;
}