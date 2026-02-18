#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        int countZero = 0, countOne = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;

            if (x == 0)
                countZero++;
            else
                countOne++;
        }

        for (int i = 0; i < countZero; i++) {
            cout << 0 << " ";
        }

        for (int i = 0; i < countOne; i++) {
            cout << 1 << " ";
        }

        cout << endl;  // Important for multiple test cases
    }

    return 0;
}
