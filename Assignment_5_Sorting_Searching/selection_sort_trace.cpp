#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[500];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int minVal = arr[minIndex];
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;

        cout << "Pass " << i + 1 << ": ";
        for (int j = 0; j < n; j++) {
            cout << arr[j];
            if (j < n - 1) cout << " ";
        }
        cout << " , min_selected = " << minVal << endl;
    }

    return 0;
}