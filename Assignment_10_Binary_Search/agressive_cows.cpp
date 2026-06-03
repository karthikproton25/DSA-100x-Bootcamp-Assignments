#include <iostream>
#include <algorithm>
using namespace std;

int n, k;
long long arr[200000];

bool canPlace(long long minDist) {
    int cows = 1;
    long long last = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] - last >= minDist) {
            cows++;
            last = arr[i];
            if (cows == k) return true;
        }
    }
    return false;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);

    long long low = 1, high = arr[n - 1] - arr[0], ans = 0;

    while (low <= high) {
        long long mid = (low + high) / 2;
        if (canPlace(mid)) { ans = mid; low = mid + 1; }
        else high = mid - 1;
    }

    cout << ans << "\n";
    return 0;
}