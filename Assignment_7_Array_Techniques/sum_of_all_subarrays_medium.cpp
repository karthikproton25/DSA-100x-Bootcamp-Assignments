#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long result = 0;

    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;

        result += x * (long long)(i + 1) * (N - i);
    }

    cout << result << endl;

    return 0;
}