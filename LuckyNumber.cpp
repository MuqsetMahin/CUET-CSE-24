#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    string n;
    cin>>n;
    int s=n.size(),count=0;
    
    for(int i=0;i<s;i++)
    {
        if(n[i]=='4'||n[i]=='7')
        {
            count++;
        }
    }
    if(count==4||count==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    return 0;

}