#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        long long arr[n];
 
        // Input array
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
 
        // Swap alternate pairs
        for (int i = 0; i + 1 < n; i += 2) {
            long long temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
 
        // Print modified array
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}