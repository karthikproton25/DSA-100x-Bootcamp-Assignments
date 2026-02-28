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

    // Column-wise wave traversal
    for (int j = 0; j < m; j++) {

        if (j % 2 == 0) {
            // Top to bottom
            for (int i = 0; i < n; i++) {
                cout << matrix[i][j] << " ";
            }
        } else {
            // Bottom to top
            for (int i = n - 1; i >= 0; i--) {
                cout << matrix[i][j] << " ";
            }
        }
    }

    return 0;
}