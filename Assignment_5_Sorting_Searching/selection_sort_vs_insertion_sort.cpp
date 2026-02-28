#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[5000];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Count Insertion Sort shifts
        int insertionArr[5000];
        for (int i = 0; i < n; i++) insertionArr[i] = arr[i];

        int insertionShifts = 0;
        for (int i = 1; i < n; i++) {
            int key = insertionArr[i];
            int j = i - 1;
            while (j >= 0 && insertionArr[j] > key) {
                insertionArr[j + 1] = insertionArr[j];
                j--;
                insertionShifts++;
            }
            insertionArr[j + 1] = key;
        }

        // Count Selection Sort swaps (optimized)
        int selectionArr[5000];
        for (int i = 0; i < n; i++) selectionArr[i] = arr[i];

        int selectionSwaps = 0;
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (selectionArr[j] < selectionArr[minIndex]) {
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                int temp = selectionArr[i];
                selectionArr[i] = selectionArr[minIndex];
                selectionArr[minIndex] = temp;
                selectionSwaps++;
            }
        }

        // Compare
        if (insertionShifts < selectionSwaps) {
            cout << "Insertion Sort" << endl;
        } else if (selectionSwaps < insertionShifts) {
            cout << "Selection Sort" << endl;
        } else {
            cout << "Tie" << endl;
        }
    }

    return 0;
}