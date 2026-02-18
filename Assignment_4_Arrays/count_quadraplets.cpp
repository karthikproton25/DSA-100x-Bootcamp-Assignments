#include <iostream>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    long long A[100];

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    long long count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                for (int l = k + 1; l < n; l++) {

                    long long value =
                        A[i]
                        - 2 * A[j]
                        + 3 * A[k]
                        - 4 * A[l];

                    if (value == x) {
                        count++;
                    }
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}