#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int left = 0;
    int right = S.length() - 1;

    while (left < right) {
        if (S[left] != S[right]) {
            cout << "NO" << endl;
            return 0;
        }
        left++;
        right--;
    }

    cout << "YES" << endl;

    return 0;
}