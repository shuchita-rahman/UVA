#include <stdio.h>

int main()
{
    char input[500000];
    int i, flag = 0, sum = 0;

    while(gets(input))
    {
        for(i = 0; input[i] != '\0'; i++)
        {
            if(input[i] >= 'A' && input[i] <= 'z')
            {
                flag = 1;
            }
            if(input[i] == ' ' || input[i + 1] == '\0')
            {
                if(flag == 1)
                {
                     sum = sum + 1;
                     flag = 0;
                }
            }
        }
        printf("%d\n", sum);
        flag = 0;
        sum = 0;
    }

    return 0;
}
