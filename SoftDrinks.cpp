#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np,ans=0,x;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    x=k*l;
    ans=min(x/nl,c*d);
    ans=min(ans,p/np);

    ans=ans/n;
    
    

    cout<<ans<<endl;
    return 0;
    
}