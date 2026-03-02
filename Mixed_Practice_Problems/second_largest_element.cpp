#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 2) {
        cout << -1 << endl;
        return 0;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x > largest) {
            secondLargest = largest;
            largest = x;
        }
        else if (x < largest && x > secondLargest) {
            secondLargest = x;
        }
    }

    if (secondLargest == INT_MIN) {
        cout << -1 << endl;
    } else {
        cout << secondLargest << endl;
    }

    return 0;
}