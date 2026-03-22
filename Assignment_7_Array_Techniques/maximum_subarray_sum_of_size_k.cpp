#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    long long arr[100000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Compute sum of first window
    long long windowSum = 0;
    for (int i = 0; i < k; i++)
        windowSum += arr[i];

    long long maxSum = windowSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    cout << maxSum << "\n";
    return 0;
}