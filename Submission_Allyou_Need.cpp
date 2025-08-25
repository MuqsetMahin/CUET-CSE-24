#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric> // for accumulate
#include<string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        int sum = accumulate(arr.begin(), arr.end(), 0);
        
        sum += count(arr.begin(), arr.end(), 0);
        
        cout << sum << endl;
    }
}