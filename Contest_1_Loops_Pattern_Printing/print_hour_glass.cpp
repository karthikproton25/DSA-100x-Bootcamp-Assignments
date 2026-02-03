#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Upper half (including middle)
    for (int i = N; i >= 1; i--) {

        // Leading spaces
        for (int s = 0; s < N - i; s++) {
            cout << " ";
        }

        // Dots with single spaces between them
        for (int j = 1; j <= i; j++) {
            cout << ".";
            if (j < i) {
                cout << " ";
            }
        }

        cout << endl;
    }

    // Lower half
    for (int i = 2; i <= N; i++) {

        // Leading spaces
        for (int s = 0; s < N - i; s++) {
            cout << " ";
        }

        // Dots with single spaces between them
        for (int j = 1; j <= i; j++) {
            cout << ".";
            if (j < i) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
