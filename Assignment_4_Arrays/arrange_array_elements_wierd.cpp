#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Print odd numbers in increasing order
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }

        // Print even numbers in decreasing order
        int start;
        if (n % 2 == 0)
            start = n;
        else
            start = n - 1;

        for (int i = start; i >= 2; i -= 2) {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}
