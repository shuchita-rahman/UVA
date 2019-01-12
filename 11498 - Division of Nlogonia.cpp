#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int testCase, n, m, x, y;

    while(cin >> testCase)
    {
         cin >> n >> m;

         while(testCase --)
         {
             cin >> x >> y;

             if(n == x || m == y)
             {
                 cout << "divisa" << endl;
             }
            else if(x > n && y  > m)
            {
                 cout << "NE" << endl;
            }
            else if(x < n && y > m)
            {
                cout << "NO" << endl;
            }
            else if(x < n && y < m)
            {
                cout << "SO" << endl;
            }
            else
            {
                cout << "SE" << endl;
            }
         }
    }

    return 0;
}
