#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') hasLower = true;
        else if (s[i] >= 'A' && s[i] <= 'Z') hasUpper = true;
        else if (s[i] >= '0' && s[i] <= '9') hasDigit = true;
        else hasSpecial = true;
    }

    int count = hasLower + hasUpper + hasDigit + hasSpecial;

    if (count == 4) {
        cout << "Strong" << endl;
    } else if (count == 3) {
        cout << "Moderate" << endl;
    } else {
        cout << "Weak" << endl;
    }

    return 0;
}