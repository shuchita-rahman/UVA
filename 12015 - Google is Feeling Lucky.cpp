#include <stdio.h>

int main()
{
   int i, t, j, Vi[10], max = 0;
   char webName[10][100];  
   
   scanf("%d", &t);
   
   for(i = 1; i <= t; i++)
   {
        for(j = 0; j < 10; j++)
        {
            scanf("%s%d", webName[j], &Vi[j]);
            
            if(max < Vi[j])
            {
                max = Vi[j];
            }      
        }  
        printf("Case #%d:\n", i);
        
        for(j = 0; j < 10; j++)
        {
              if(max == Vi[j])
              {
                  printf("%s\n", webName[j]); 
              }
        }   
        max = 0;   
   }

   return 0;
}


