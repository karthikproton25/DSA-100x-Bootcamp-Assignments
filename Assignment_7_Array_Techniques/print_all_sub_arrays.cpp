#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[500];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            for (int k = l; k <= r; k++) {
                cout << arr[k];
                if (k < r) cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}