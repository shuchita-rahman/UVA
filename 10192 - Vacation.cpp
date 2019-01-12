#include <stdio.h>
#include <string.h>

int a[200][200];

void makeZero(char s1[], char s2[], int len1, int len2);
int maxNum(int a, int b);

int main()
{
     char s1[200], s2[200];
     int len1, len2, a[200][200], k = 1, i, j;

     while(gets(s1) && s1[0] != '#')
     {
         gets(s2);

         len1 = strlen(s1);
         len2 = strlen(s2);

         makeZero(s1, s2, len1, len2);

         for(i = 1; i <= len2; i++)
         {
             for(j = 1; j <= len1; j++)
             {
                 if(s1[i - 1] == s2[i - 1])
                 {
                     a[i][j] = 1 + a[i - 1][j - 1];
                 }
                 else
                 {
                     a[i][j] = maxNum(a[i][j - 1], a[i-1][j]);
                 }
             }
         }
        printf("Case #%d: you can visit at most %d cities.\n", k, a[len2][len1]);
        k++;
     }

     return 0;
}

void makeZero(char s1[], char s2[], int len1, int len2)
{
     for(int i = 0; i <= len1; i++)
     {
         a[0][i] = 0;
     }
     for(int i = 0; i <= len2; i++)
     {
         a[i][0] = 0;
     }
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
