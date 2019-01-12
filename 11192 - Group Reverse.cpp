#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, r = 1, len;
    char input[200];

    while(scanf("%d", &n) == 1 && n != 0)
    {
        scanf("%s", input);

        len = strlen(input);
        n = len / n;

        for(i = 0; input[i] != '\0'; i++)
        {
             if(r == n)
             {
                 for(j = i; r >= 1; j--, r--)
                 {
                     if(input[i + 1] == '\0' && r == 1)
                     {
                        printf("%c\n", input[j]);
                     }
                     else
                     {
                         printf("%c", input[j]);
                     }
                 }
             }
             r++;
        }
    }
    return 0;
}

