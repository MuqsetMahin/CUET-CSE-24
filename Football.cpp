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
    int count = 0,add=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==str[i+1]&& i+1!=str.size())
        {
            
            count++;
            if(count==6)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        if(str[i]!=str[i+1])
        {
            count=0;
        }

        
        

       
    }
    if(count < 6)
    {
    cout << "NO" << endl; 
    }
    return 0;
    
}