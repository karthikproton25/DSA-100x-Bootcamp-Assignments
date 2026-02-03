#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper half (including middle)
    for (int i = 1; i <= n; i++) {
        // Leading spaces
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        // Stars and hollow spaces
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                cout << "*";
            } else {
                cout << " ";
            }

            // Space between stars (no trailing space)
            if (j < i) {
                cout << " ";
            }
        }

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Leading spaces
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        // Stars and hollow spaces
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) {
                cout << "*";
            } else {
                cout << " ";
            }

            // Space between stars (no trailing space)
            if (j < i) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
