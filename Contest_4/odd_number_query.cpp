#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    long long prefix[100001] = {0};
    for (int i = 1; i <= n; i++) {
        long long val;
        cin >> val;
        prefix[i] = prefix[i - 1] + val;
    }

    long long total = prefix[n];

    while (q--) {
        int l, r;
        cin >> l >> r;
        long long removed = prefix[r] - prefix[l - 1];
        long long remaining = total - removed;
        cout << (remaining % 2 != 0 ? "YES" : "NO") << "\n";
    }

    return 0;
}