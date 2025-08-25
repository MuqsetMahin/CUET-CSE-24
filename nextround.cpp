#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int n,k,t,ans=0;
    vector<int>arr;
    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        cin>>t;
        arr.push_back(t);
        
    }
    for(int p=0;p<n;p++)
    {
        if(arr[p] >=arr[k-1] && arr[p] > 0)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
return 0;



}