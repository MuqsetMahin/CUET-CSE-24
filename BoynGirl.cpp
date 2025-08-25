#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    
    cin>>str;
    int count=0,n=str.size();
    sort(str.begin(),str.end());
    for(int i=0;i+1<str.size();i++)
    {
        if( str[i]==str[i+1]  )
        {
            count++;
        }
        
        
    }
    
    int num=n-count;
    if(num%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else if(num%2!=0)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}