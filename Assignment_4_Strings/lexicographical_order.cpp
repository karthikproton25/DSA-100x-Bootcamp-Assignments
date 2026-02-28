#include <iostream>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    int lenA = A.size();
    int lenB = B.size();
    int minLen = lenA < lenB ? lenA : lenB;

    for (int i = 0; i < minLen; i++) {
        if (A[i] < B[i]) {
            cout << "A" << endl;
            return 0;
        } else if (A[i] > B[i]) {
            cout << "B" << endl;
            return 0;
        }
    }

    // All compared characters are equal
    if (lenA < lenB) {
        cout << "A" << endl;
    } else if (lenA > lenB) {
        cout << "B" << endl;
    } else {
        cout << "Equal" << endl;
    }

    return 0;
}