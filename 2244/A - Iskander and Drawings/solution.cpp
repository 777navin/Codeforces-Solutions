#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
void solve() {
                int navin_input;
 
    cin >> navin_input;
 
    string stringinput;
 
    cin >> stringinput;
 
    int bada_len = 0;
    int abhi_len = 0;
 
    for (int i = 0; i < navin_input; ++i) {
 
        if (stringinput[i] == '#') {
            abhi_len++;
        }
         else 
         {
            bada_len = max(bada_len, abhi_len);
            abhi_len = 0;
        }
    }
 
 
    bada_len = max(bada_len, abhi_len);
 
    int zyda_time = (bada_len + 1) / 2;
    cout << zyda_time << "
";
}
 
int main() {
    
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}