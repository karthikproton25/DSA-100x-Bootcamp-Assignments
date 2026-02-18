#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long arr[N];

    // Input array
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int left = 0;
    int right = N - 1;

    // Reverse in-place
    while (left < right) {
        long long temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    // Print reversed array
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
