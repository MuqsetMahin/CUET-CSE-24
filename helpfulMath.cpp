#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    cin>>str;
    vector<int>digit;
    for(char ch:str)
    {
        if(isdigit(ch))
        {
            digit.push_back(ch);
        }
    }
    sort(digit.begin(),digit.end());
    int p=0;
    for(int i=0;i<str.size();i++)
    {
        if(isdigit(str[i]))
        {
            str[i]=digit[p];
            p++;
        }
    }
    cout<<str<<endl;
    return 0;   
    

}