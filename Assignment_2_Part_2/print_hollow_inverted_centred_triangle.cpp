#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--) {

        // Leading spaces
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        // Stars and inner spaces
        for (int j = 1; j <= i; j++) {
            if (i == n || j == 1 || j == i) {
                cout << "*";
            } else {
                cout << " ";
            }

            // Space between stars (not after last)
            if (j < i) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
