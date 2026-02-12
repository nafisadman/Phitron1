#include <stdio.h>
int main()
{
    int run = 1;
    while (run)
    {
        int n = 0;
        scanf("%d", &n);
        if (n == 1999)
        {
            run = 0;
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}