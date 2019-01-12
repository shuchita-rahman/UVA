#include <stdio.h>

int main()
{
    long long int i = 0, len = -1, j, x, flag = 0;
    long long int a[50000], b[50000];

    while(scanf("%d", &x) == 1)
    {
        for(i = 0; i <= len; i++)
        {
            if(x == a[i])
            {
               flag = 1;
               b[i] = b[i] + 1;
               break;
            }
        }
        if(flag == 0)
        {
            len = len + 1;
            a[len] = x;
        }
    }

    return 0;
}

