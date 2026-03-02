#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            long long value;
            cin >> value;

            if (i == j) {
                sum += value;
            }
        }
    }

    cout << sum << endl;

    return 0;
}