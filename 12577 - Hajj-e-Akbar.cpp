#include <stdio.h>
#include <string.h>

int main()
{
    int i = 1;
    char input[20], hajj[20] = "Hajj", umrah[20] = "Umrah";
     
     while(1)
     {
        scanf("%s", input);
        
        if(input[0] == '*' && input[1] == '\0')
        {
            break;            
        }
        else if(strcmp(input, hajj) == 0)
        {
            printf("Case %d: Hajj-e-Akbar\n", i);                 
        }        
        else if(strcmp(input, umrah) == 0)
        {
            printf("Case %d: Hajj-e-Asghar\n", i);                 
        } 
        i++;
     }  
    return 0;
}

