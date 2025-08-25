#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int m,n;
        string a,b,c;
        cin>>n;
        
        cin>>a;
        cin>>m;
        cin>>b;
        cin>>c;
        for(int i=0;i<m;i++)
        {
            if(c[i]=='D')
            {
                a=a+b[i];
            }
            if(c[i]=='V')
            {
                a=b[i]+a;
            }


        }
        cout<<a<<endl;


    }
    return 0;

}