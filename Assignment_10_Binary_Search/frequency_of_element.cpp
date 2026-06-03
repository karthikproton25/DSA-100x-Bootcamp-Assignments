#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        freq[x]++;
    }

    while (q--) {
        int x;
        cin >> x;
        cout << freq[x] << "\n";
    }

    return 0;
}
