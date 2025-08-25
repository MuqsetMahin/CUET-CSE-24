#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    long long int m,n,a,ans,t,p;
    cin>>m>>n>>a;
    while(m>0)
    {
        t=m/a;
        if(m%a!=0)
         {
              t++;
         }
         m=0;
        
    }
    while(n>0)
    {
        p=n/a;
        if(n%a!=0)
        {
            p++;
        }
        n=0;
        
    }
    ans=t*p;
    cout<<ans<<endl;
    return 0;
    

}