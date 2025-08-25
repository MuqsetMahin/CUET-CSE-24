#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
    int n,p=0,q=0,r=0;
    cin>>n;
    int x,y,z;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        p=p+x;
        q=q+y;
        r=r+z;
        
    }
    if(p==0&&q==0&&r==0)
    {
        cout<<"YES"<<endl;  
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}