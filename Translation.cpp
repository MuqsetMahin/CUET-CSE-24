#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    string str1,str2,str3="";
    cin>>str1;
    cin>>str2;
    
    int n=str1.size();
    for(int i=n-1;i>=0;i--)
    {
       str3=str3+str1[i];
    }
    if(str3==str2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }   
    return 0;

}