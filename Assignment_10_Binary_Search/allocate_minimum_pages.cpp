#include <iostream>
using namespace std;

int n, k;
long long arr[200000];

bool canAllocate(long long maxPages) {
    int students = 1;
    long long current = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxPages) return false;
        if (current + arr[i] > maxPages) {
            students++;
            current = arr[i];
        } else {
            current += arr[i];
        }
    }
    return students <= k;
}

int main() {
    cin >> n >> k;

    long long total = 0, maxVal = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    if (k > n) {
        cout << -1 << "\n";
        return 0;
    }

    long long low = maxVal, high = total, ans = total;

    while (low <= high) {
        long long mid = (low + high) / 2;
        if (canAllocate(mid)) { ans = mid; high = mid - 1; }
        else low = mid + 1;
    }

    cout << ans << "\n";
    return 0;
}