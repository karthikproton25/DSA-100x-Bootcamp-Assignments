#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) { ans = mid; high = mid - 1; }
        else if (arr[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    return ans;
}

int lastOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) { ans = mid; low = mid + 1; }
        else if (arr[mid] < x) low = mid + 1;
        else high = mid - 1;
    }
    return ans;
}

int main() {
    int n, q;
    cin >> n >> q;

    int arr[100000];
    for (int i = 0; i < n; i++) cin >> arr[i];

    while (q--) {
        int x;
        cin >> x;

        int first = firstOccurrence(arr, n, x);
        if (first == -1) {
            cout << -1 << "\n";
        } else {
            cout << first + 1 << " " << lastOccurrence(arr, n, x) + 1 << "\n";
        }
    }

    return 0;
}