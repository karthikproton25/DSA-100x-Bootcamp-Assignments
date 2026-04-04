#include <iostream>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    long long arr[100000];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int left = 0;
    long long windowSum = 0, count = 0;

    for (int right = 0; right < n; right++) {
        windowSum += arr[right];

        while (windowSum >= k) {
            windowSum -= arr[left];
            left++;
        }

        // All subarrays ending at right with start from left to right are valid
        count += (right - left + 1);
    }

    cout << count << "\n";
    return 0;
}