#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // prefix[i] = A[1] - A[2] + A[3] - ... with sign based on position
    long long prefix[100001] = {0};

    for (int i = 1; i <= n; i++) {
        long long val;
        cin >> val;
        if (i % 2 == 1) prefix[i] = prefix[i - 1] + val;
        else             prefix[i] = prefix[i - 1] - val;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        long long ans = prefix[r] - prefix[l - 1];

        // If L is even, the first element should be + but our prefix gives it -
        // so flip the sign
        if (l % 2 == 0) ans = -ans;

        cout << ans << endl;
    }

    return 0;
}