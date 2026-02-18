#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        int arr1[1000];
        for (int i = 0; i < N; i++) {
            cin >> arr1[i];
        }

        int M;
        cin >> M;

        unordered_map<int, int> freq;

        for (int i = 0; i < M; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        // Print intersection in order of first array
        for (int i = 0; i < N; i++) {
            if (freq[arr1[i]] > 0) {
                cout << arr1[i] << " ";
                freq[arr1[i]]--;  // Mark as used
            }
        }

        cout << endl;
    }

    return 0;
}
