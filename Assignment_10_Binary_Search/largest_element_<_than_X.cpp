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

        int low = 0, high = n - 1, ans = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] <= x) { ans = arr[mid]; low = mid + 1; }
            else high = mid - 1;
        }

        cout << ans << "\n";
    }

    return 0;
}