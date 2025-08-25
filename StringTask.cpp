#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string str;
    string result="";
    string vowels="aeiouy";
    cin>>str;
    int count=0,n=str.size();
    for(int i=0;i<str.size();i++)
    {
        str[i]=tolower(str[i]);
        
        
    }
    for(int i=0;i<str.size();i++)
    {
        if(vowels.find(str[i])==string::npos)
        {
            result+=".";
            result+=str[i];
        }
    }


    cout<<result<<endl;
    return 0;
}