#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,p=0,q=0;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='A')
        {
            p++;

        }
        else if(str[i]=='D')
        {
            q++;
        }
        

    }
    if(p>q)
        {
            cout<<"Anton"<<endl;
        }
        else if(q>p)
        {
            cout<<"Danik"<<endl;
        }
        else
        {
            cout<<"Friendship"<<endl;
        }
    return 0;
}