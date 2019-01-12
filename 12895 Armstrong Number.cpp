#include <stdio.h>
#include <math.h>

int checkArmStrong(long long int n);
int main()
{
    long long int n, testCase, i;
    int flag;

    scanf("%I64d", &testCase);

    for(i = 1; i <= testCase; i++)
    {
        scanf("%I64d", &n);
        flag = checkArmStrong(n);

        if(flag == 1)
        {
            printf("Armstrong\n");
        }
        else
        {
            printf("Not Armstrong\n");
        }

        flag = 0;
    }

    return 0;
}

int checkArmStrong(long long int n)
{
    long long int sum = 0, i = n, newNum = 0;

    while(i != 0)
    {
        i = i / 10;
        sum = sum + 1;
    }

    i = n;
    while(1)
    {
        newNum = newNum + pow((i % 10), sum);
         i = i / 10;
         if(i < 10)
         {
             newNum =  newNum + pow(i, sum);
             break;
         }
    }

    if(n == newNum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


