#include <stdio.h>
#include <string.h>

int main()
{
     int i = 1, j;
     char eng[20] = "HELLO", spa[20] = "HOLA", ger[20] = "HALLO", fre[20] = "BONJOUR";
     char ita[20] = "CIAO", russ[20] = "ZDRAVSTVUJTE", input[20];
     
     while(1)
     {
         scanf("%s", input);
         
         if(input[0] == '#' && input[1] == '\0')
         {
             break;            
         }    
         else if(strcmp(input, eng) == 0)
         {
              printf("Case %d: ENGLISH\n", i);
         }  
         else if(strcmp(input, spa) == 0)
         {
              printf("Case %d: SPANISH\n", i);
         }  
         else if(strcmp(input, ger) == 0)
         {
              printf("Case %d: GERMAN\n", i);
         }
         else if(strcmp(input, fre) == 0)
         {
              printf("Case %d: FRENCH\n", i);
         }
         else if(strcmp(input, ita) == 0)
         {
              printf("Case %d: ITALIAN\n", i);
         }
         else if(strcmp(input, russ) == 0)
         {
              printf("Case %d: RUSSIAN\n", i);
         }   
         else
         {
              printf("Case %d: UNKNOWN\n", i);    
         }    
         i++;
     }
    return 0;
}

