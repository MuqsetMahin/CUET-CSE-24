#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        long long int add=0,k=1,x;
        cin>>n;
        while(n>(1+pow(10,k)))
        {
            if(n%(1+pow(10,k))==0)
            {
                x=n/(1+pow(10,k));
                k++;
            }
            

            
        
            


        
        
        }

        cout<<add<<endl;

        
        
        


    }
    return 0;


}