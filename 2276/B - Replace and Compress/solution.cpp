#include <iostream>
#include <string>
 
using namespace std;
 
void solveTestCase() {
    string binaryString;
    cin >> binaryString;
 
    int stringLength = binaryString.length();
 
    bool canExpand = false;   // Can we get length L0 + 2?
    bool canShrink = false;   // Can we get length L0 - 2?
 
    for (int i = 1; i < stringLength - 1; i++) {
        if (binaryString[i - 1] == binaryString[i] && binaryString[i] == binaryString[i + 1]) {
            canExpand = true;
        }
        if (binaryString[i - 1] != binaryString[i] && binaryString[i] != binaryString[i + 1]) {
            canShrink = true;
        }
    }
 
    int distinctCount = 1; // Base compressed string is always reachable
    if (canExpand) distinctCount++;
    if (canShrink) distinctCount++;
 
    cout << distinctCount << "
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int testCaseCount;
    cin >> testCaseCount;
 
    while (testCaseCount--) {
        solveTestCase();
    }
 
    return 0;
}