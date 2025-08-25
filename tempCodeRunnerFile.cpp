#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        vector<int>arr(n,1);
        vector<int>arr1;
        
        

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            arr1.push_back(arr[i]);
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr1[i])
            {
                sum++;
            }


        }
        if(sum>0)
        {
            cout<<"NO"<<endl;
            
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<arr.size()<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<arr1[i];
                cout<<" ";
            }
            cout<<endl;

            
        }
        

    }

}