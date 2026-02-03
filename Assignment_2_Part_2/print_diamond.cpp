#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        // Leading spaces
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        // Stars (no trailing space)
        for (int j = 1; j <= i; j++) {
            cout << "*";
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

        // Stars (no trailing space)
        for (int j = 1; j <= i; j++) {
            cout << "*";
            if (j < i) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
