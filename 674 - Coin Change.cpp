#include <stdio.h>

int t[10][8000];

void numOfWays(int n, int coin[]);

int main()
{
    int n;
    int coin[10];

    coin[1] = 1;
    coin[2] = 5;
    coin[3] = 10;
    coin[4] = 25;
    coin[5] = 50;

    while(scanf("%d", &n) == 1)
    {
        numOfWays(n, coin);
        printf("%d\n", t[5][n]);
    }
    return 0;
}


void numOfWays(int n, int coin[])
{
    for(int i = 0; i <= n ; i++)
    {
        t[0][i] = 0;
    }

    for(int i = 1; i <= 5; i++)
    {
        t[i][0] = 1;
    }

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(j >= coin[i])
            {
                t[i][j] = t[i - 1][j] + t[i][j - coin[i]];
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
}

