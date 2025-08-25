#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int a,b,ans=0;
    cin>>a>>b;

    

    
        while(b>=a)
        {
            a=3*a;
            b=2*b;
            ans++;
        }

    cout<<ans<<endl;
    return 0;
}