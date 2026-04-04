#include <iostream>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int windowVowels = 0;
    for (int i = 0; i < k; i++)
        if (isVowel(s[i])) windowVowels++;

    cout << windowVowels;

    for (int i = k; i < n; i++) {
        if (isVowel(s[i]))     windowVowels++;
        if (isVowel(s[i - k])) windowVowels--;
        cout << " " << windowVowels;
    }

    cout << "\n";
    return 0;
}