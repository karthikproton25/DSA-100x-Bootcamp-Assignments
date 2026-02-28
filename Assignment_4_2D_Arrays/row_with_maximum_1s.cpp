#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int maxCount = 0;
    int resultIndex = -1;

    for (int i = 0; i < n; i++) {

        int countOnes = 0;

        for (int j = 0; j < m; j++) {
            int value;
            cin >> value;

            if (value == 1) {
                countOnes++;
            }
        }

        if (countOnes > maxCount) {
            maxCount = countOnes;
            resultIndex = i;
        }
    }

    if (maxCount == 0) {
        cout << -1 << endl;
    } else {
        cout << resultIndex << endl;
    }

    return 0;
}