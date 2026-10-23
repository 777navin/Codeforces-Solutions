 
#include <iostream>
#include <string>
#include <vector>
 
void solve() {
    int documentCount;
    std::string commands;
    std::cin >> documentCount >> commands;
 
    std::vector<int> pendingDocuments;
    std::vector<bool> wasPrinted(documentCount + 1, false);
 
    for (int index = 0; index < documentCount; ++index) {
        const int documentId = index + 1;
        const char command = commands[index];
 
        if (command == '1') {
            pendingDocuments.push_back(documentId);
        } else if (command == '2') {
            if (!pendingDocuments.empty()) {
                wasPrinted[pendingDocuments.back()] = true;
                pendingDocuments.pop_back();
            } else {
                wasPrinted[documentId] = true;
            }
        } else if (command == '3') {
            wasPrinted[documentId] = true;
        }
    }
 
    std::vector<int> notPrintedDocuments;
    for (int documentId = 1; documentId <= documentCount; ++documentId) {
        if (!wasPrinted[documentId]) {
            notPrintedDocuments.push_back(documentId);
        }
    }
 
    std::cout << notPrintedDocuments.size() << '
';
    for (std::size_t index = 0; index < notPrintedDocuments.size(); ++index) {
        if (index > 0) {
            std::cout << ' ';
        }
        std::cout << notPrintedDocuments[index];
    }
    std::cout << '
';
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
 
    int testCases;
    std::cin >> testCases;
    while (testCases-- > 0) {
        solve();
    }
}