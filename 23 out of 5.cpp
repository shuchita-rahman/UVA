#include <stdio.h>

int main()
{
    int num[10], sum = 0, i, j, flag = 0;

    while(scanf("%d%d%d%d%d", &num[0], &num[1], &num[2], &num[3], &num[4]) == 5)
    {
        if(num[0] == 0 &&
           num[1] == 0 &&
           num[2] == 0 &&
           num[3] == 0 &&
           num[4] == 0)
        {
            break;
        }

        for(i = 1; i <= 3; i++)
        {
            for(j = 0; j < 5; j++)
            {
                if(i == 1)
                {
                    sum = sum + num[j];
                }
                else if(i == 2)
                {
                    sum = sum * num[j];
                }
                else if(i == 3)
                {
                    sum = sum - num[j];
                }
            }
            if(sum >= 23)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 1)
        {
            printf("Possible\n");
        }
        else
        {
            printf("Impossible\n");
        }
         sum = 0;
         flag = 0;
    }

    return 0;
}
