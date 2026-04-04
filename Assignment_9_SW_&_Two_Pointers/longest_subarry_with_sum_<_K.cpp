#include <iostream>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    long long arr[100000];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int left = 0, maxLen = 0;
    long long windowSum = 0;

    for (int right = 0; right < n; right++) {
        windowSum += arr[right];

        while (windowSum >= k) {
            windowSum -= arr[left];
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }

    cout << maxLen << "\n";
    return 0;
}