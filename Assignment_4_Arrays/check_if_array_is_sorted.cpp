#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long arr[N];

    // Input the array elements
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    bool isSorted = true;

    // Check ascending order
    for (int i = 0; i < N - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = false;
            break;  // No need to check further
        }
    }

    if (isSorted)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
