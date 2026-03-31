#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    map<long long, long long> freq;
    long long count = 0;

    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        count += freq[val];
        freq[val * k]++;
    }

    cout << count << "\n";
    return 0;
}