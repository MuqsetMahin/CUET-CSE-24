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
        vector<int>arr(n);
        vector<int>arr1(n);
        vector<int>arr3;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            arr1[i]=arr[i];
        }
        if(is_sorted(arr.begin(),arr.end()))
        {
            cout<<"No"<<endl;
            
        }
        
        else if(arr.size()>=2)
        {

            cout<<"Yes"<<endl;
            sort(arr.begin(),arr.end());
            for(int i=0;i<n;i++)
            {
                if(arr[i]!=arr1[i])
                {
                    arr3.push_back(arr1[i]);

                }
               
            }
            cout<<arr3.size()<<endl;
            for(int i=0;i<arr3.size();i++)
            {
                cout<<arr3[i]<<" ";
            }
            cout<<endl;

        }
        
        
        

    }
    return 0;

}