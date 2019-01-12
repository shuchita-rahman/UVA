#include <stdio.h>

int main()
{
     long int n, a[100005], i, j, total;
     long int sum1 = 0, sum2 = 0, book1, book2;

     while(scanf("%I64d", &n) == 1)
     {
          for(i = 0; i < n; i++)
          {
              scanf("%I64d", &a[i]);
          }
          scanf("%I64d", &total);
          sum1 = a[1] - a[0];
          book1 =  a[0];
          book2 = a[1];

          if(sum1 < 0)
          {
              sum1 = sum1 * -1;
          }

         for(i = 0; i < n; i++)
         {
             for(j = i + 1; j < n; j++)
             {
                 sum2 = a[j] - a[i];

                 if(sum2 < 0)
                 {
                     sum2 = sum2 * -1;
                 }
                 if(sum2 < sum1 && a[j] + a[i] == total)
                 {
                     book1 = a[i];
                     book2 = a[j];
                     sum1 = sum2;
                 }
             }
         }
        if(book1 > book2)
        {
            printf("Peter should buy books whose prices are %I64d and %i64d.\n", book2, book1);
        }
        else
        {
            printf("Peter should buy books whose prices are %I64d and %i64d.\n", book1, book2);
        }

     }

    return 0;
}
