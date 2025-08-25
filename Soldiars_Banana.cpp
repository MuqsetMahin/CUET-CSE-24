#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,k,w,ans=0,x;
    cin>>k>>n>>w;
    
         x=(k*w*(w+1)/2);
         if(x<=n)
         {
                cout<<0<<endl;
                return 0;
          
         }
         else
         {
            ans=x-n;
         }
    
    cout<<ans<<endl;
    return 0;
    

}