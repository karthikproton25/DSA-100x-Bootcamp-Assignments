#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long arr[5000];
    unordered_map<long long, int> freq;

    // Input and count frequency
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    bool found = false;

    // Print elements with frequency = 1
    for (int i = 0; i < N; i++) {
        if (freq[arr[i]] == 1) {
            cout << arr[i] << " ";
            found = true;
        }
    }

    if (!found) {
        cout << endl;  // print empty line
    }

    return 0;
}
