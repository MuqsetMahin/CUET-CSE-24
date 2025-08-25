#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,h,e,ans=0;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        if(e>h)
        {
            ans=ans+2;
        }
        else
        {
            ans=ans+1;
        }
        
    }
    cout<<ans<<endl;
    return 0;

}