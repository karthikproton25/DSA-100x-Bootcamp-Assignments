#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[100000];
    for (int i = 0; i < n; i++) cin >> arr[i];

    map<int, int> freq;

    // Build first window
    for (int i = 0; i < k; i++) freq[arr[i]]++;

    cout << freq.size();

    for (int i = k; i < n; i++) {
        // Add new element
        freq[arr[i]]++;

        // Remove outgoing element
        freq[arr[i - k]]--;
        if (freq[arr[i - k]] == 0) freq.erase(arr[i - k]);

        cout << " " << freq.size();
    }

    cout << "\n";
    return 0;
}