#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long a[100001];
    long long prefix[100001];

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // Build prefix sum
    prefix[0] = 0;
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + a[i];
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