#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num); 

        if (num == 0)
        {
            printf("0\n");
        }
        else
        {
            while (num != 0) 
            {
                int remainder = num % 10; 
                printf("%d ", remainder); 
                num = num / 10;           
            }
            printf("\n");
        }
    }
    return 0;
}