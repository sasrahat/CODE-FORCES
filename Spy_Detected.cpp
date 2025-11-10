#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
   cin >> t;
    for(int i = 0 ; i < t ; i++)
    {
        int n, max;
        cin >> n;
        int array[n], ans;
        for(int j = 0 ; j < n ; j++)
        {
            cin >> array[j];
        }
        
       if(array[0] == array[1] && array[0] == array[2])
      { max = array[0];}
      else if(array[1] == array[2] && array[1] == array[0])
      {
        max = array[1];
      } else
      {
        max = array[2];
      }

        for(int j = 0 ; j < n ; j++)
        {
            if(array[j] != max)
           {
            j = j + 1;
             cout << j << "\n";
             break;
           }
        }
    }
     return 0;
}