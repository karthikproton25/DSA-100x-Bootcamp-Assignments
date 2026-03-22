
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[500];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int l = 0; l < n; l++) {
        long long sum = 0;
        for (int r = l; r < n; r++) {
            sum += arr[r];
            cout << sum << endl;
        }
    }

    return 0;
}