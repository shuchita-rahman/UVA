#include <stdio.h>
#include <string.h>

int main()
{
    int stanGuess, a[20];
    char OllieAns[20];

     a[1] = 1; a[2] = 2; a[3] = 3; a[4] = 4; a[5] = 5;
     a[6] = 6; a[7] = 7; a[8] = 8;a[9] = 9; a[10] = 10;

     scanf("%d", &stanGuess);
     gets(OllieAns);

    while(stanGuess != 0)
    {

        if(strcmp(OllieAns, "too high") == 0)
        {
             for(int i = stanGuess; i <= 10; i++)
             {
                 a[i] = 0;
             }
        }
        else if(strcmp(OllieAns, "too low") == 0)
        {
              for(int i = stanGuess; i >= 1; i--)
             {
                 a[i] = 0;
             }
        }
        else if(strcmp(OllieAns, "right on") == 0)
        {

              if(a[stanGuess] == 0)
              {
                   printf("Stan is dishonest\n");
              }
              else
              {
                  printf("Stan may be honest\n");
              }


              a[1] = 1; a[2] = 2; a[3] = 3; a[4] = 4; a[5] = 5;
              a[6] = 6; a[7] = 7; a[8] = 8;a[9] = 9; a[10] = 10;
        }

       scanf("%d", &stanGuess);

       if(stanGuess == 0)
       {
           break;
       }
       gets(OllieAns);
    }

    return 0;
}
