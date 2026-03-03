#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int grid[50][50];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    // Boundary traversal clockwise from bottom-left
    // Up left column, right top row, down right column, left bottom row
    int r = n - 1, c = 0;
    bool first = true;

    auto visit = [&](int row, int col) -> bool {
        if (grid[row][col] == -1) return true;
        if (!first) cout << " ";
        cout << grid[row][col];
        first = false;
        return false;
    };

    // Up left column
    for (int i = n - 1; i >= 0; i--)
        if (visit(i, 0)) goto done;

    // Right along top row
    for (int j = 1; j < m; j++)
        if (visit(0, j)) goto done;

    // Down right column
    for (int i = 1; i < n; i++)
        if (visit(i, m - 1)) goto done;

    // Left along bottom row
    for (int j = m - 2; j >= 1; j--)
        if (visit(n - 1, j)) goto done;

    done:
    cout << endl;
    return 0;
}