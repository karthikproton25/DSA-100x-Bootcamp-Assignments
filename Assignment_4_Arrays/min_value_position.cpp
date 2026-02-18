#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long x;
    cin >> x;

    long long minValue = x;
    int position = 1;   // 1-based index

    for (int i = 2; i <= N; i++) {
        cin >> x;

        if (x < minValue) {
            minValue = x;
            position = i;
        }
    }

    cout << minValue << " " << position << endl;

    return 0;
}
