#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][4] = {{1,2,5,6},{3,4,7,8}};
    for (int i = 0; i < 2; i++) //row
    {
        for (int j = 0; j < 4; j++) //column
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
    

}