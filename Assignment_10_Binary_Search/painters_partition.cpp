#include <iostream>
using namespace std;

int n, k;
long long arr[200000];

bool canPaint(long long maxTime) {
    int painters = 1;
    long long current = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxTime) return false;
        if (current + arr[i] > maxTime) {
            painters++;
            current = arr[i];
        } else {
            current += arr[i];
        }
    }
    return painters <= k;
}

int main() {
    cin >> n >> k;

    long long total = 0, maxVal = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        total += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    long long low = maxVal, high = total, ans = total;

    while (low <= high) {
        long long mid = (low + high) / 2;
        if (canPaint(mid)) { ans = mid; high = mid - 1; }
        else low = mid + 1;
    }

    cout << ans << "\n";
    return 0;
}