#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    set<long long> seen;
    seen.insert(0);
    long long prefix = 0;

    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        prefix += val;
        if (seen.count(prefix - x)) {
            cout << "YES\n";
            return 0;
        }
        seen.insert(prefix);
    }

    cout << "NO\n";
    return 0;
}