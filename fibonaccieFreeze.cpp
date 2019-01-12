#include <stdio.h>

void findFibonnaci(int n);

long long int v[7000];

int main()
{
     long long int n, result, i;

    while(scanf("%I64d", &n) == 1)
    {
        v[0] = 1;
        v[1] = 1;
        for(i = 2; i < n; i++)
        {
            v[i] = -1;
        }
        result = findFibonnaci(n);
        printf("The Fibonacci number for %I64d is I64d\n", n, result);
    }
    return 0;
}

long long int findFibonnaci(long long int n)
{
      if(v[n] != -1)
      {
          return v[n];
      }
      else
      {
          v[n] = findFibonnaci(n - 1) + findFibonnaci(n - 2);
          return v[n];
      }

}
