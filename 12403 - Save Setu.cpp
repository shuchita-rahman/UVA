#include <stdio.h>
#include <string.h>

int main()
{
    long int i, account = 0, donateSur, t;
    char testCase[20], donate[20] = "donate";
    
    scanf("%ld", &t);
    
    for(i = 1; i <= t; i++)
    {
         scanf("%s", testCase);
          
         if(strcmp(testCase, donate)== 0)
         {
             scanf("%ld", &donateSur);
             account = donateSur + account;     
         } 
         else
         {
              printf("%ld\n", account);
                  
         }
    }
    return 0;
}

