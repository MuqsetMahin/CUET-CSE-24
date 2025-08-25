#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
    int n,x;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>n;
            if(n==1)
            {
                x=abs(3-i)+abs(3-j);
            }
        }
    }
    cout<<x<<endl;
    return 0;
}