#include <stdio.h>
#include <math.h>

int main()
{
    long long int, N, A, i, result = 0;

     while(scanf("%I64d%I64d", &N, &A) == 2)
     {
         for(i = 1; i <= N; i++)
         {
            result = (pow(A, i) * i) + result;
         }
         printf("%I64d\n", result);
         result = 0;
     }
    return 0;
}
