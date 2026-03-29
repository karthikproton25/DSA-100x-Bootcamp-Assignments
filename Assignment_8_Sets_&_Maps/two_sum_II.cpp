#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    map<long long, int> seen;
    vector<long long> arr(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        long long need = x - arr[i];
        if (seen.count(need)) {
            cout << seen[need] << " " << i << "\n";
            return 0;
        }
        seen[arr[i]] = i;
    }

    cout << -1 << "\n";
    return 0;
}