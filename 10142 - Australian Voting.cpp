#include <stdio.h>

int main()
{
     float  c, f, sum = 0;
     int t;

     scanf("%d", &t);

     for(int i = 1; i <= t; i++)
     {
         scanf("%f", &c);
         scanf("%f", &f);

        f = f / 1.8;
         c = c + f;
         printf("Case %d: %.2f\n", i, c);
     }

    return 0;
}
