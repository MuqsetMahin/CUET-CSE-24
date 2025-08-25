#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--){

        string s;
        cin >> s;
        int p=s.length();
        if(p>10){
        int t=p-2;
        
        char a=s[0], b=s[p-1];
        cout << a << t << b << endl;

        }
        else{
            cout << s << endl;
        }
    }
    return 0;

}