#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    map<long long, int> seen;
    seen[0] = 0;
    long long prefix = 0;

    for (int i = 1; i <= n; i++) {
        long long val;
        cin >> val;
        prefix += val;
        if (seen.count(prefix - x)) {
            cout << seen[prefix - x] + 1 << " " << i << endl;
            return 0;
        }
        seen[prefix] = i;
    }

    cout << -1 << endl;
    return 0;
}