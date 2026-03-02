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

        int pos = 0;  // position to place next non-zero

        // Move non-zero elements forward
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                arr[pos] = arr[i];
                pos++;
            }
        }

        // Fill remaining with zeros
        while (pos < n) {
            arr[pos] = 0;
            pos++;
        }

        // Print result
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}