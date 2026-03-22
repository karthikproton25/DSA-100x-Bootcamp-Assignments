#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long total = 0;

    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        total += val * (long long)(i + 1) * (n - i);
    }

    cout << total << "\n";
    return 0;
}