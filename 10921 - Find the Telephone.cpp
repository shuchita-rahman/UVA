#include <stdio.h>

int main()
{
    char c[100];

    while(scanf("%s", &c) != EOF)
    {
        for(int i = 0; c[i] != '\0'; i++)
        {
            if(c[i] == '0')
            {
                if(c[i + 1] == '\0')
                {
                   printf("0\n");
                }
                else
                {
                    printf("0\n");
                }
            }
            else if(c[i] == '1')
            {
                if(c[i + 1] == '\0')
                {
                   printf("1\n");
                }
                else
                {
                    printf("1");
                }
            }
            else if(c[i] == '-')
            {
                if(c[i + 1] == '\0')
                {
                   printf("-\n");
                }
                else
                {
                    printf("-");
                }
            }
            else if(c[i] == 'A' || c[i] == 'B' || c[i] == 'C')
            {
                if(c[i + 1] == '\0')
                {
                   printf("2\n");
                }
                else
                {
                    printf("2");
                }
            }
            else if(c[i] == 'D' || c[i] == 'E' || c[i] == 'F')
            {
                if(c[i + 1] == '\0')
                {
                   printf("3\n");
                }
                else
                {
                    printf("3");
                }
            }
            else if(c[i] == 'G' || c[i] == 'H' || c[i] == 'I')
            {
                if(c[i + 1] == '\0')
                {
                   printf("4\n");
                }
                else
                {
                    printf("4");
                }
            }
            else if(c[i] == 'J' || c[i] == 'K' || c[i] == 'L')
            {
                if(c[i + 1] == '\0')
                {
                   printf("5\n");
                }
                else
                {
                    printf("5");
                }
            }
            else if(c[i] == 'M' || c[i] == 'N' || c[i] == 'O')
            {
                if(c[i + 1] == '\0')
                {
                   printf("6\n");
                }
                else
                {
                    printf("6");
                }
            }
             else if(c[i] == 'P' || c[i] == 'Q' || c[i] == 'R' || c[i] == 'S')
            {
                if(c[i + 1] == '\0')
                {
                   printf("7\n");
                }
                else
                {
                    printf("7");
                }
            }
            else if(c[i] == 'T' || c[i] == 'U' || c[i] == 'V')
            {
                if(c[i + 1] == '\0')
                {
                   printf("8\n");
                }
                else
                {
                    printf("8");
                }
            }
            else if(c[i] == 'W' || c[i] == 'X' || c[i] == 'Y' || c[i] == 'Z')
            {
                if(c[i + 1] == '\0')
                {
                   printf("9\n");
                }
                else
                {
                    printf("9");
                }
            }

        }
    }
    return 0;
}
