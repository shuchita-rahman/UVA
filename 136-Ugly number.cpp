#include <stdio.h>

long long int findUglyNum(long long int n);

int sum = 11;

int main()
{
     long long int i, ugly;

     for(i = 16; sum <= 12; i++)
     {
          ugly = findUglyNum(i);
     }
     printf("The 1500'th ugly number is <%I64d>.\n", ugly);
    return 0;
}
long long int findUglyNum(long long int n)
{
    long long int r;
    r = n;

    while(1)
    {
        if(n % 2 == 0)
        {
            n = n / 2;
        }
        if(n % 3 == 0)
        {
            n = n / 3;
        }
        if(n % 5 == 0)
        {
            n = n / 5;
        }

        if(n == 1)
        {
            sum = sum + 1;
            return r;
        }
        else
        {
            return -1;
        }
    }

}

