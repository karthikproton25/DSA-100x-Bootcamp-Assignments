#include <iostream>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        int t;
        long long l, r;
        cin >> t >> l >> r;

        if (l > r) {
            cout << 0 << endl;
            continue;
        }

        long long ans = 0;

        if (t == 1) ans = max(0LL, r - l - 1);
        if (t == 2) ans = max(0LL, r - l);
        if (t == 3) ans = max(0LL, r - l);
        if (t == 4) ans = max(0LL, r - l + 1);

        cout << ans << endl;
    }

    return 0;
}