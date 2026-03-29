#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    map<int, int> index;
    for (int i = 1; i <= n; i++) {
        int val;
        cin >> val;
        index[val] = i;
    }

    while (q--) {
        int x;
        cin >> x;
        if (index.count(x)) cout << index[x] << "\n";
        else cout << -1 << "\n";
    }

    return 0;
}