#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int val;

        // Decide starting value for the row
        if (i % 2 == 1) {
            val = 0;   // odd row
        } else {
            val = 1;   // even row
        }

        // Print i digits in the row
        for (int j = 1; j <= i; j++) {
            cout << val;

            // Alternate between 0 and 1
            if (val == 0)
                val = 1;
            else
                val = 0;
        }

        cout << endl;
    }

    return 0;
}