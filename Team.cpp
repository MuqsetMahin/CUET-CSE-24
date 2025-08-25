#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t,ans=0;
    int petya,vesya,tonya;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        
        cin >> petya >> vesya >> tonya;
        if(petya + vesya + tonya >= 2) {
            ans++;

        }
        
   }
    cout<<ans<<endl;
return 0;
}