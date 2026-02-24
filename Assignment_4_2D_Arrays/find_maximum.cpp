#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int maxValue = -1;  // Since all values ≥ 0

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;

            if (x > maxValue) {
                maxValue = x;
            }
        }
    }

    cout << maxValue << endl;

    return 0;
}
