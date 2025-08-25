#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    int p=0,x;
    cin>>s;
    int n=s.size();
    for(int i=0;i<s.size();i++)
    {
       if(isupper(s[i]))
       {
           p++;
       }
       
       
    }
    if(p>n/2)
    {
        for(int i=0;i<n;i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;
}