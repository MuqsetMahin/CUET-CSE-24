#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    
    vector<int>arr;
    cin >> t;
    while(t--)
    {
        int s=0,a,n;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>a;
            arr.push_back(a);

            
        }
        
        
        for(int i=0;i<n;i++)
        {  
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    s++;

                }
            }

            

        }
        if(s>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        arr.clear();
           



    }
    return 0;
}