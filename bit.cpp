#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,t=0,ch;
    cin>>n;
    int ans = 0;
    while(n--){
        string str;
        cin>>str;
        if(str=="X++"|| str=="++X")
        {
            t++;
        }
        else if(str=="X--"|| str=="--X")
        {
            t--;
        }


        
    }
    cout<<t<<endl;
    return 0;

}