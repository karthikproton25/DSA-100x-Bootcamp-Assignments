#include <iostream>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    long long arr[100000];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int left = 0, minLen = n + 1;
    long long windowSum = 0;

    for (int right = 0; right < n; right++) {
        windowSum += arr[right];

        while (windowSum > k) {
            minLen = min(minLen, right - left + 1);
            windowSum -= arr[left];
            left++;
        }
    }

    cout << (minLen == n + 1 ? -1 : minLen) << "\n";
    return 0;
}