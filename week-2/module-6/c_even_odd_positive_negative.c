#include <stdio.h>
int main()
{
    int N = 0, even = 0, positive = 0, negative = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int n = 0;
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            even++;
        }

        if (n < 0)
        {
            negative++;
        }
        else if (n > 0)
        {
            positive++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, N - even, positive, negative);
    return 0;
}