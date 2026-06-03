#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int arr[100000];
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);

    while (q--) {
        int x, y;
        cin >> x >> y;

        // First index where arr[i] >= x
        int low = 0, high = n - 1, left = n;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] >= x) { left = mid; high = mid - 1; }
            else low = mid + 1;
        }

        // Last index where arr[i] <= y
        low = 0; high = n - 1;
        int right = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] <= y) { right = mid; low = mid + 1; }
            else high = mid - 1;
        }

        cout << max(0, right - left + 1) << "\n";
    }

    return 0;
}