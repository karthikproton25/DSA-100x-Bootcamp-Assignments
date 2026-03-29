#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    map<long long, long long> freq;
    freq[0] = 1;
    long long prefix = 0;
    long long count = 0;

    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        prefix += val;
        count += freq[prefix - x];
        freq[prefix]++;
    }

    cout << count << endl;
    return 0;
}