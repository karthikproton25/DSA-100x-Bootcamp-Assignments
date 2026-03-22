#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long arr[3000];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int l = 0; l < n; l++) {
        long long sum = 0;
        for (int r = l; r < n; r++) {
            sum += arr[r];
            cout << sum << "\n";
        }
    }

    return 0;
}