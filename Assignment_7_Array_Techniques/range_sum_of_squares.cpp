#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    long long prefix[100001] = {0};

    for (int i = 1; i <= n; i++) {
        long long val;
        cin >> val;
        prefix[i] = prefix[i - 1] + val * val;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl;
    }

    return 0;
}