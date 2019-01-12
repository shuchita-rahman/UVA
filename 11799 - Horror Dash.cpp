#include <stdio.h>

int main()
{
     int testCase, n, i = 1, j;
     int m1, m2, speed;

     scanf("%d", &testCase);

     while(i <= testCase)
     {
         scanf("%d", &n);
         scanf("%d", &m1);

         if(n == 1)
         {
             speed = m1;
         }
         for(j = 1; j < n; j++)
         {
             scanf("%d", &m2);

             if(m2 > m1)
             {
                 speed = m2;
             }
             else
             {
                 speed = m1;
             }
             m1 = speed;
         }
         printf("Case %d: %d\n", i, speed);
         i++;
     }
     return 0;
}
