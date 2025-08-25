#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int p=stoi(str);
    int n=str.size(),sum=0,count=0;
   

    if(p%4==0 ||p%7==0 || p%47==0||p%74==0||p%444==0||p%447==0||p%474==0||p%477==0||p%744==0||p%747==0||p%777==0)
    
    {
        cout<<"YES"<<endl;
    }
     else
     {
        cout<<"NO"<<endl;
     }
     
     return 0;

}
