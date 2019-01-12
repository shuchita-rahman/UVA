#include <iostream>

using namespace std;

void trigleWave(int amplitude, int frequency);

int main()
{
    int testCase, amplitude, frequency;

   while(cin >> testCase)
   {
        for(int i = 1; i <= testCase; i++)
        {
            cin >> amplitude;
            cin >> frequency;

            trigleWave(amplitude, frequency);
            if(i != testCase)
            {
                cout << endl;
            }
        }
   }
}

void trigleWave(int amplitude, int frequency)
{

  for(int i = 1; i <= frequency; i++)
  {
       for(int j = 1; j <= amplitude; j++)
       {
           for(int k = 1; k <= j; k++)
           {
               cout << j;
           }
           cout << endl;
       }
       for(int j = amplitude - 1; j >= 1; j--)
       {
           for(int k = 1; k <= j; k++)
           {
               cout << j;
           }
           cout << endl;
       }
      if(i != frequency)
      {
          cout << endl;
      }
  }

}
