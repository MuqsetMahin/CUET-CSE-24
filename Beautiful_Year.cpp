#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,p,q,r,s,m;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<4;i--)
    {
        n=n+1;
        m=n;
        p=m%10;
        m=m/10;
        q=m%10;
        m=m/10;
        r=m%10;
        m=m/10;
        s=m%10;
        m=m/10;
        if(p!=q && p!=r && p!=s && q!=r && q!=s && r!=s)
        {
            cout<<n<<endl;

            return 0;
        }
        
    }


    
}