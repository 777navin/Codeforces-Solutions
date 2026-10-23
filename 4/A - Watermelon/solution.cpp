#include <iostream>
 
using namespace std;
 
int main() {
    int w;
    cin >> w;
    
    // A watermelon can be divided into two even parts if and only if
    // its weight is even and strictly greater than 2.
    if (w > 2 && w % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}