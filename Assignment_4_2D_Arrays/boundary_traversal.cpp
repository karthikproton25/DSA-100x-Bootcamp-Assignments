#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long matrix[1000][1000];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // Top row
    for (int j = 0; j < m; j++) {
        cout << matrix[0][j] << " ";
    }

    // Right column
    for (int i = 1; i < n; i++) {
        cout << matrix[i][m - 1] << " ";
    }

    // Bottom row (if more than one row)
    if (n > 1) {
        for (int j = m - 2; j >= 0; j--) {
            cout << matrix[n - 1][j] << " ";
        }
    }

    // Left column (if more than one column)
    if (m > 1) {
        for (int i = n - 2; i > 0; i--) {
            cout << matrix[i][0] << " ";
        }
    }

    return 0;
}