#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int n = 0;
    scanf("%d", &n);
    int max = n;
    for (int i = 1; i < N; i++)
    {
        scanf("%d", &n);
        if (n > max)
        {
            max = n;
        }
    }
    printf("%d", max);
    return 0;
}