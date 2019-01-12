#include <stdio.h>

int main()
{
    int a, b, sum1, sum2;

    while(scanf("%d%d", &a, &b) == 2 && (a != -1 && b != -1))
    {
        sum1 = a - b;

        if(a > b)
        {
            sum2 = (100 - a) + b;
        }
        else if(a < b)
        {
            sum2 = (100 - b) + a;
        }

        if(sum1 < 0)
        {
            sum1 = sum1 * - 1;
        }
        if(sum2 < 0)
        {
            sum2 = sum2 * - 1;
        }

        if(sum1 < sum2)
        {
            printf("%d\n", sum1);
        }
        else
        {
            printf("%d\n", sum2);
        }
    }

    return 0;
}

