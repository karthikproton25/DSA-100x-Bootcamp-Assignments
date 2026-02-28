#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[500];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n - 1; i++) {
        int swaps = 0;

        for (int j = 0; j < n - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }

        cout << "Pass " << i << ": ";
        for (int j = 0; j < n; j++) {
            cout << arr[j];
            if (j < n - 1) cout << " ";
        }
        cout << " , swaps = " << swaps << endl;

        if (swaps == 0) {
            break;
        }
    }

    return 0;
}