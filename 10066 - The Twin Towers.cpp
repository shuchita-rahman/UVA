#include <stdio.h>
#include <string.h>

int a[1010][1010];
void makeZero(int len1, int len2);

int main()
{
    int s1[2000], s2[2000];
    int i, j, len1, len2, k = 1;

    while(scanf("%d%d", len1, len2) == 2 && len1 != 0 && len2 != 0)
    {
        for(i = 0; i < len1; i++)
        {
            scanf("%d", &s1[i]);
        }

        for(i = 0; i < len2; i++)
        {
            scanf("%d", &s2[i]);
        }

        for(i = 1; i <= len1; i++)
        {
            for(j = 1; j <= len2; j++)
            {
                 if(s1[i - 1] == s2[j - 1])
                 {
                     a[i][j] = a[i - 1][j - 1] + 1;
                 }
                 else
                 {
                     if(a[i][ j- 1] > a[i - 1][j])
                     {
                         a[i][j] = a[i][ j- 1];
                     }
                     else
                     {
                         a[i][j] = a[i - 1][j];
                     }
                 }
            }
        }
        printf("Twin Towers #%d\n", k);
        printf("Number of Tiles : %d\n\n",k, a[len1][len2]);
        k++;
    }
    return 0;
}

void makeZero(int len1, int len2)
{
    for(int i = 0; i <= len1; i++)
    {
        for(int j = 0; j <= len2; j++)
        {
            a[i][j] = 0;
        }
    }

}

