#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 4; i++)
    {
        if(i==1 || i==4)
        {
            for(int p=0;p<n;p++)
            {
                cout<<"*";
            }
            cout<<endl;
            continue;
        }
        

        for(int j=0;j<=n;j++)
        {
            if(j==0 || j==n-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
               
            }
            
            
            

        }
        cout<<endl;
    }
    return 0;
}