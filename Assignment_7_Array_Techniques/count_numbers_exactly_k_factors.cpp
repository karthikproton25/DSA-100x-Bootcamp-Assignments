#include <iostream>
using namespace std;

int main() {
    int n, q, k;
    cin >> n >> q >> k;

    // Precompute divisor count for all numbers up to 100000
    int divCount[100001] = {0};
    for (int i = 1; i <= 100000; i++)
        for (int j = i; j <= 100000; j += i)
            divCount[j]++;

    int arr[100001];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    // Build prefix sum: count of elements with exactly k divisors
    long long prefix[100001] = {0};
    for (int i = 1; i <= n; i++)
        prefix[i] = prefix[i - 1] + (divCount[arr[i]] == k ? 1 : 0);

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl;
    }

    return 0;
}