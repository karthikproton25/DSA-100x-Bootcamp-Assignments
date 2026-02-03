#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Print leading spaces
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        // Print stars WITHOUT trailing space
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
