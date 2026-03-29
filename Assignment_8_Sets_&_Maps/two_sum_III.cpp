#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    map<long long, long long> freq;
    long long count = 0;

    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        count += freq[x - val];
        freq[val]++;
    }

    cout << count << "\n";
    return 0;
}