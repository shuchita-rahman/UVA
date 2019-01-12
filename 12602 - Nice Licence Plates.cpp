#include <stdio.h>
#include <stdlib.h>

int main()
{
      int n, i, j, sum , sum1, index = 0, ans, l;
      char s[20], k;

      scanf("%d", &n);

      for(i = 1; i <= n; i++)
      {
          scanf("%s", s);

          for(k = 'A', l = 0; l <= 'Z'; k++, l++)
          {
              if(s[0] == k)
              {
                    sum = 26 * 26 * l;
                    break;
              }
          }

          for(k = 'A', l = 0; l <= 'Z'; k++, l++)
          {
              if(s[1] == k)
              {
                    sum = 26 * l + sum;
              }
          }

          for(k = 'A', l = 0; l <= 'Z'; k++, l++)
          {
              if(s[2] == k)
              {
                    sum = l + sum;
              }
          }

          sum1 = ((s[4] - '0') * 1000) + ((s[5] - '0') * 100) + ((s[6] - '0') * 10) + (s[7] - '0');
          if(abs(sum - sum1) <= 100)
          {
              printf("nice\n");
          }
          else
          {
              printf("not nice\n");
          }
          index = 0;
      }

      return 0;
}
