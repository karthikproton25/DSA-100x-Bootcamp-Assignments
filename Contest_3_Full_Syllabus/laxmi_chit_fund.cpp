#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long total = 0;
    long long maxVal = LLONG_MIN;
    long long minVal = LLONG_MAX;

    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;

        total += x;

        if (x > maxVal)
            maxVal = x;

        if (x < minVal)
            minVal = x;
    }

    long long avg = total / N;  // floor automatically

    cout << total << " " << maxVal << " " << minVal << " " << avg << endl;

    return 0;
}