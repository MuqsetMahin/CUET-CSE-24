#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    string str;
    cin >> str;
    
    int ans;
    while(t--)
    {
        for(int i=0;i<n;i++)

        {
        
            if(str[i]=='B' &&str[i+1]=='G')
            {
                str[i]='G';
                str[i+1]='B';
                i++;
            }
        }
        
    
   }
   cout<<str<<endl;
   return 0;
}