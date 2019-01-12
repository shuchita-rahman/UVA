#include <stdio.h>
#include <string.h>

int main()
{
    char input[2000], a[2000];
    int i, j, sum[2000], len, s = 0, m = 0;

    while(gets(input))
    {
        len = strlen(input);

        for(i = 0; i < len; i++)
        {
            sum[i] = 0;
        }

        for(i = 0; i < len; i++)
        {
            if(input[i] != '\0')
            {
                for(j = i + 1; j < len; j++)
                {
                    if(input[i] == input[j])
                    {
                        sum[m] = sum[m] + 1;
                        a[m] = input[i];
                        input[j] = '\0';
                    }
                }
                m++;
            }
        }
        for(int k = 0; k < m; k++)
        {
            for(j = k + 1; j < m; j++)
            {
                if(sum[k] > sum[j])
                {
                    int temp = sum[k];
                    sum[k] = sum[j];
                    sum[j] = temp;

                    temp = a[k];
                    a[k] = a[j];
                    a[j] = temp;
                }
            }
        }

        for(int k = 0; k < m; k++)
        {
            printf("%d %d\n", a[k], sum[k]);
        }
    }

    return 0;
}
