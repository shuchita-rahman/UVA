#include <stdio.h>

void summingDigit(long int n);

int main()
{
    long int i, n;
  
   while(1)
   {
        scanf("%ld", &n);
        
        if(n == 0)
        {
            break;     
        }
        else if(n < 10)
        {
             printf("%ld\n", n);
        }
        else
        {
            summingDigit(n); 
        }    
   }
    return 0;
}

void summingDigit(long int n)
{
    long int p, q, sum = 0;
    
    while(1)
    {
           q = n / 10;
           p = n % 10;  
           
           if(q > 10)
           {
               sum = sum + p;
               n = q;     
           }
           else
           {
               sum = sum + p + q;    
               break;
           }  
    }
    
    if(sum < 10)
    {
         printf("%ld\n", sum);
    }
    else
    {
         summingDigit(sum);
    }      
}

