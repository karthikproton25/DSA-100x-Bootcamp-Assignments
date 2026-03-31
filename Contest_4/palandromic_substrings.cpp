#include <iostream>
using namespace std;

bool isPalindrome(string& s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            if (isPalindrome(s, l, r)) {
                cout << s.substr(l, r - l + 1) << "\n";
            }
        }
    }

    return 0;
}