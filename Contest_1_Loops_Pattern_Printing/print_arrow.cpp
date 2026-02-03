#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Upper half (including middle)
    for (int i = 1; i <= N; i++) {

        // Leading spaces
        for (int s = 1; s <= i - 1; s++) {
            cout << " ";
        }

        // First >
        cout << ">";

        // Inner space and second > (if needed)
        if (i > 1) {
            for (int s = 1; s <= 2 * i - 3; s++) {
                cout << " ";
            }
            cout << ">";
        }

        cout << endl;
    }

    // Lower half
    for (int i = N - 1; i >= 1; i--) {

        // Leading spaces
        for (int s = 1; s <= i - 1; s++) {
            cout << " ";
        }

        // First >
        cout << ">";

        // Inner space and second > (if needed)
        if (i > 1) {
            for (int s = 1; s <= 2 * i - 3; s++) {
                cout << " ";
            }
            cout << ">";
        }

        cout << endl;
    }

    return 0;
}
