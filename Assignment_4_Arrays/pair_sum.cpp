#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        long long arr[1000];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        long long X;
        cin >> X;

        unordered_map<long long, long long> freq;
        long long count = 0;

        for (int i = 0; i < N; i++) {
            long long complement = X - arr[i];

            // If complement already seen
            if (freq.count(complement)) {
                count += freq[complement];
            }

            // Store current number
            freq[arr[i]]++;
        }

        cout << count << endl;
    }

    return 0;
}
