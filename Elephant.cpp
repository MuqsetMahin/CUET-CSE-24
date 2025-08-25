#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x=n/5;
    if(n%5!=0)
    {
        x++;
    }
    cout<<x<<endl;
    return 0;
}