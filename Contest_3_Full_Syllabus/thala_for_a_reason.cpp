#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long r;
        cin >> r;

        int sum = 0;
        while (r > 0) {
            sum += r % 10;
            r /= 10;
        }

        if (sum == 7) {
            cout << "Thala for a reason" << endl;
        } else {
            cout << "Blocked for no reason" << endl;
        }
    }

    return 0;
}