#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    int sum1 = 0, sum2 = 0, sum3 = 0, len1 = 0, len2 = 0, testCase;
    char s1[500], s2[200];

    cin >> testCase;

    for(int i = 1; i <= testCase; i++)
    {
        gets(s1);
        getchar();
        gets(s2);
        getchar();

        len1 = strlen(s1);
        len2 = strlen(s2);

        for(int j = 0; s1[j] != '\0'; j++)
        {
            if((s1[i] >= 'A' && s1[i] <= 'Z') ||(s1[i] >= 'a' && s1[j] <= 'z'))
                   sum1 = sum1 + 1;
        }

        for(int j = 0; s2[j] != '\0'; j++)
        {
            if((s2[i] >= 'A' && s2[i] <= 'Z') ||(s2[i] >= 'a' && s2[j] <= 'z'))
                 sum2 = sum2 + 1;
        }

        for(int j = 0; s1[j] != '\0'; j++)
        {
            for(int k = 0; k < len2; k++)
            {
                  if(s1[j] == s2[k] || s1[j] == s2[k] + 32 || s1[j] + 32 == s2[k])
                  {
                      sum3 = sum3 + 1;
                      s2[k] = '\0';
                      break;
                  }
            }
        }

        if(sum1 == sum3 && sum3 == sum2)
        {
            cout <<"Case "<<i<<": "<<"Yes"<<endl;
        }
        else
        {
            cout <<"Case "<<i<<": "<<"No"<<endl;
        }
    }
    return 0;

}
