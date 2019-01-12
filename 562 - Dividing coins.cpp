#include <stdio.h>

int t[1000][1000];

int knapSack(int m, int weight, int coin[]);
int maxNum(int a, int b);

int main()
{
     int i, j, m, testCase, weight = 0;
     int coin[1000], result;

     scanf("%d", &testCase);

     for(i = 1; i <= testCase; i++)
     {
         scanf("%d", &m);

         for(j = 0; j < m; j++)
         {
             scanf("%d", &coin[j]);
             weight = weight + coin[j];
         }
         result = knapSack(m, weight / 2, coin);
         result = weight - (2 * result);
         printf("%d\n", result);
         weight = 0;
     }

     return 0;
}

int knapSack(int m, int weight, int coin[])
{
    int i, j;

    for(i = 0; i <= weight; i++)
    {
        t[0][i] = 0;
    }
    for(i = 0; i <= m; i++)
    {
        t[i][0] = 0;
    }

    for(i = 1; i <= m; i++)
    {
        for(j = 1; j <= weight; j++)
        {
            if(j < coin[i - 1])
            {
                t[i][j] = t[i - 1][j];
            }
            else
            {
                t[i][j] = maxNum(t[i - 1][j], t[i][j - 1]);
            }
        }
    }
    return t[i - 1][j - 1];
}

int maxNum(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

