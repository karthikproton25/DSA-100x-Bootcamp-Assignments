#include <iostream>
using namespace std;

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int prefix[100001];
    prefix[0] = 0;

    // Build prefix sum
    for (int i = 1; i <= n; i++) {
        if (isVowel(s[i - 1])) {
            prefix[i] = prefix[i - 1] + 1;
        } else {
            prefix[i] = prefix[i - 1];
        }
    }

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;

        cout << prefix[r] - prefix[l - 1] << endl;
    }

    return 0;
}