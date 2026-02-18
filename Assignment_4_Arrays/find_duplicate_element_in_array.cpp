#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int N;
        cin >> N;
 
        int xorArray = 0;
        int xorRange = 0;
 
        // XOR all array elements
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            xorArray ^= x;
        }
 
        // XOR numbers from 0 to N-2
        for (int i = 0; i <= N - 2; i++) {
            xorRange ^= i;
        }
 
        cout << (xorArray ^ xorRange) << endl;
    }
 
    return 0;
}