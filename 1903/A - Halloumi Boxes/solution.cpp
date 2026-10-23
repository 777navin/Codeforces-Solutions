#include <bits/stdc++.h> // include all standard headers
using namespace std;
 
#define ll long long
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Declare any additional variables here
    
    int t; // number of test cases
    cin >> t;
    
    while (t--) {
        // write your code here for each test case
        
 
        ll n, k;
cin >> n >> k;
 
vector<int> a(n);
 
        for (int  i = 0; i < n; i++)
        {
            cin>>a[i];
        }
 
        if(k >= 2 || is_sorted(a.begin(),a.end())){
            cout<<"YES
";
 
        }else{
            cout<<"NO
";
        }
        
        
    }
    
    return 0;
}