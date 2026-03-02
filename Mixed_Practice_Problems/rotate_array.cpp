#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long arr[1000000];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int D;
        cin >> D;

        if (n == 0) {
            cout << endl;
            continue;
        }

        D = D % n;  // safe normalization

        // Print from D to end
        for (int i = D; i < n; i++) {
            cout << arr[i] << " ";
        }

        // Print first D elements
        for (int i = 0; i < D; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    return 0;
}