#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Leading spaces to center the triangle
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        // Stars and inner spaces
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }

            // Space between stars (but NOT after last one)
            if (j < i) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
