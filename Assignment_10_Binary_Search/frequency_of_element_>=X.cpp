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
        int x;
        cin >> x;

        // Find first index where arr[i] >= x
        int low = 0, high = n - 1, ans = n;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] >= x) { ans = mid; high = mid - 1; }
            else low = mid + 1;
        }

        cout << n - ans << "\n";
    }

    return 0;
}