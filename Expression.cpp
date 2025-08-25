#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c,add1,add2,add3,add4,add5,add6,ans=0;
    cin>>a;
    cin>>b;
    cin>>c;
    add1=a*b*c;
    add2=a+b+c;
    add3=a*b+c;
    add4=a+b*c;
    add5=a*(b+c);
    add6=(a+b)*c;
    ans=max(ans,add1);
    ans=max(ans,add2);
    ans=max(ans,add3);
    ans=max(ans,add4);
    ans=max(ans,add5);
    ans=max(ans,add6);
    cout<<ans<<endl;
    return 0;


}