#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int matrix[10][10];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {

        // 1. Move Right
        for (int j = left; j <= right; j++) {
            cout << matrix[top][j] << " ";
        }
        top++;

        // 2. Move Down
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--;

        // 3. Move Left
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                cout << matrix[bottom][j] << " ";
            }
            bottom--;
        }

        // 4. Move Up
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++;
        }
    }

    return 0;
}