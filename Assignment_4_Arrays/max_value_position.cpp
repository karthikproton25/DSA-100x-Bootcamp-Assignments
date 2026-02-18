#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long x;
    cin >> x;

    long long maxValue = x;
    int position = 1;  // 1-based index

    for (int i = 2; i <= N; i++) {
        cin >> x;

        if (x > maxValue) {
            maxValue = x;
            position = i;
        }
    }

    cout << maxValue << " " << position << endl;

    return 0;
}
