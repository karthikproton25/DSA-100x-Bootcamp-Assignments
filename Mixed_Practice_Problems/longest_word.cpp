#include <iostream>
using namespace std;

int main() {
    string S;
    getline(cin, S);   // important to read full line with spaces

    int maxLength = 0;
    int currentLength = 0;

    for (char ch : S) {
        if (ch != ' ') {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
            currentLength = 0;
        }
    }

    // Check last word
    if (currentLength > maxLength) {
        maxLength = currentLength;
    }

    cout << maxLength << endl;

    return 0;
}