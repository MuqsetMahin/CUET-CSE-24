#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int n=1,count=0;
    cin>>n;
    char str;
    for(int i=0;i<n;i++)
    {
        cin>>str;

        if(str=='1')
        {
            count ++;
        }
        
        
        
    }
    if(count>0)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
    return 0;
}