#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    string m;
    cin>>n;
    int p,q,j=0;
    for(int i=0;i<n;i++)
    {

        cin>>m;
        
            if(m[j]=='1'&&m[j+1]=='0')
            {
                p=m[j];
                q=m[j+1];
                
                
            }
            if(m[j]=='0'&&m[j+1]=='1')
            {
                p=m[j];
                q=m[j+1];
                
            }
        

    }
}