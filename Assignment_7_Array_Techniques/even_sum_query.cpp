#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long prefix[100001] = {0};

    for (int i = 1; i <= n; i++) {
        long long val;
        cin >> val;
        prefix[i] = prefix[i - 1] + (i % 2 == 0 ? val : 0);
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