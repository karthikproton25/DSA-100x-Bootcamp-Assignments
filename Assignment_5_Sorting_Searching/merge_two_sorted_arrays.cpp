#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[100000], b[100000];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            cout << a[i] << " ";
            i++;
        } else {
            cout << b[j] << " ";
            j++;
        }
    }

    // Print remaining elements of a
    while (i < n) {
        cout << a[i] << " ";
        i++;
    }

    // Print remaining elements of b
    while (j < m) {
        cout << b[j] << " ";
        j++;
    }

    cout << endl;
    return 0;
}