#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int t,m,n,ans=0,add=0;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        
            cin>>m>>n;
            if(j==0)
            {
                ans=n;
            }
            if(j>0&&j<t)
            {
                add=max(add,ans);
                ans=ans-m+n;
                
           }

        
        
    }
    if(t==1)
    {
    cout<<ans<<endl;
    }
    else
    {
        cout<<add<<endl;
    }
    
    return 0;
}