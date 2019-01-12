#include <stdio.h>

int main()
{
    int input;

    while(scanf("%d", &input) == 1)
    {
        if(input % 6 == 0)
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}
