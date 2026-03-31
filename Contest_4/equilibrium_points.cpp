#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long arr[100000];
    for (int i = 0; i < n; i++) cin >> arr[i];

    long long total = 0;
    for (int i = 0; i < n; i++) total += arr[i];

    long long prefix = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        prefix += arr[i];
        long long suffix = total - prefix + arr[i];
        if (prefix == suffix) count++;
    }

    cout << count << endl;
    return 0;
}