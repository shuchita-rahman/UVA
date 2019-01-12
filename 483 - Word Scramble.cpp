#include <stdio.h>
#include <string.h>

int main()
{
    char input[500000];
    int i, j;

    while(gets(input))
    {
        for(i = 0; input[i] != '\0'; i++)
        {
            if(input[i] == ' ' || input[i + 1] == '\0')
            {
                if(input[i + 1] == '\0')
                {
                    j = i;
                }
                else
                {
                    j = i - 1;
                }
                for( ; (input[j] != ' ') && (input[j] != '\0'); j--)
                {
                    printf("%c", input[j]);
                }
                if(input[i] == ' ')
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
