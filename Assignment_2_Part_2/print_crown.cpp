#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper crown
    for (int i = 1; i <= n - 1; i++) {

        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Middle spaces
        for (int s = 1; s <= 2 * (n - i); s++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Base of the crown (last row)
    for (int i = 1; i <= 2 * n; i++) {
        cout << "*";
    }

    cout << endl;

    return 0;
}
