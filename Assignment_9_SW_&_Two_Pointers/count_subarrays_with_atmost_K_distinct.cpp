#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    long long arr[100000];
    for (int i = 0; i < n; i++) cin >> arr[i];

    map<long long, int> freq;
    int left = 0;
    long long count = 0;

    for (int right = 0; right < n; right++) {
        freq[arr[right]]++;

        while ((int)freq.size() > k) {
            freq[arr[left]]--;
            if (freq[arr[left]] == 0) freq.erase(arr[left]);
            left++;
        }

        count += (right - left + 1);
    }

    cout << count << "\n";
    return 0;
}