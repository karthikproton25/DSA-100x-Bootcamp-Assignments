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

    // Print column by column
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            cout << matrix[i][j] << " ";
        }
    }

    return 0;
}
