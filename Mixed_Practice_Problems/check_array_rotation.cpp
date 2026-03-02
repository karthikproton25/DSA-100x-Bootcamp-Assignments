#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long arr[100000];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int K = 0;  // default (no rotation)

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                K = i + 1;
                break;
            }
        }

        cout << K << endl;
    }

    return 0;
}