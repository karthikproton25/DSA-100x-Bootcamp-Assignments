#include <iostream>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    int prefix[100001] = {0};
    for (int i = 1; i <= n; i++)
        prefix[i] = prefix[i - 1] + (isVowel(s[i - 1]) ? 1 : 0);

    while (q--) {
        int l, r;
        cin >> l >> r;
        int len = r - l + 1;
        int vowels = prefix[r] - prefix[l - 1];
        int consonants = len - vowels;
        cout << (vowels == consonants ? "YES" : "NO") << "\n";
    }

    return 0;
}