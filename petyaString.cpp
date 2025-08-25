#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
string a,b;
cin>>a>>b;
std::transform(a.begin(), a.end(), a.begin(), ::tolower);
std::transform(b.begin(),b.end(),b.begin(),::tolower);
int n=a.size();
for(int i=0;i<n;i++)
{
    if(a[i]>b[i])
    {
        cout<<1<<endl;
        return 0;
    }
    else if(a[i]<b[i])
    {
        cout<<-1<<endl;
        return 0;
    }   
}
cout<<0<<endl;
return 0;

}