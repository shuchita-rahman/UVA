#include <iostream>

using namespace std;

int main()
{
    char input[500000];

    while(cin >> input)
    {
        for(int i = 0; input[i] != '\0'; i++)
        {
             input[i] = input[i] - 7;
             cout << input[i];
        }
        cout << endl;
    }

    return 0;
}
