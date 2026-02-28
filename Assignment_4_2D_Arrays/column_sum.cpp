#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long colSum[1000] = {0};  // initialize all to 0

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long value;
            cin >> value;
            colSum[j] += value;
        }
    }

    for (int j = 0; j < m; j++) {
        cout << colSum[j] << " ";
    }

    return 0;
}