#include <stdio.h>

int main()
{
    long int testCase, s, d, i, higest, lowest;

    while(scanf("%ld", &testCase) == 1)
    {
        for(i = 1; i <= testCase; i++)
        {
            scanf("%ld%ld", &s, &d);

            if(s < d || (s - d) % 2 == 1)
            {
                printf("impossible\n");
            }
            else
            {
                higest = (s + d) / 2;
                lowest = s - higest;

                printf("%ld %ld\n", higest, lowest);
            }
        }
    }

    return 0;
}
