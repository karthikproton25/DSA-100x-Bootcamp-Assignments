#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[1000][1000];

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // Wave traversal
    for (int i = 0; i < n; i++) {

        if (i % 2 == 0) {
            // Left to right
            for (int j = 0; j < m; j++) {
                cout << matrix[i][j] << " ";
            }
        } else {
            // Right to left
            for (int j = m - 1; j >= 0; j--) {
                cout << matrix[i][j] << " ";
            }
        }
    }

    return 0;
}