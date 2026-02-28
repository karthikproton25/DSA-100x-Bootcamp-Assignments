#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    // Check length
    if (S.length() != 10) {
        cout << "Weak" << endl;
        return 0;
    }

    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    for (char ch : S) {

        if (ch >= 'a' && ch <= 'z') {
            hasLower = true;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            hasUpper = true;
        }
        else if (ch >= '0' && ch <= '9') {
            hasDigit = true;
        }
        else {
            hasSpecial = true;
        }
    }

    if (hasLower && hasUpper && hasDigit && hasSpecial) {
        cout << "Strong" << endl;
    } else {
        cout << "Weak" << endl;
    }

    return 0;
}