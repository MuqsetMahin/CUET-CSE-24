#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    string str,target="hello";
    cin >> str;
    int n=str.size(),j=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]==target[j])
        {
            j++;
        }
        if(j==target.size())
        {
            break;
        }
    }
    if(j==target.size())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;



}