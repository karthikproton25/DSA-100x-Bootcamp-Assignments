#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int x = 1; x <= N; x++) {

        int divisorCount = 0;

        for (int d = 1; d * d <= x; d++) {
            if (x % d == 0) {
                divisorCount++;  // d is divisor

                if (d != x / d) {
                    divisorCount++;  // paired divisor
                }
            }
        }

        if (divisorCount <= 4) {
            cout << x << " ";
        }
    }

    return 0;
}
