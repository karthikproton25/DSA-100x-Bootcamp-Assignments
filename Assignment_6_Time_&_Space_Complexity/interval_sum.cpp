#include <iostream>
using namespace std;

long long sum(long long n) {
    return n * (n + 1) / 2;
}

int main() {
    int Q;
    cin >> Q;

    while (Q--) {
        long long L, R;
        cin >> L >> R;

        long long result = sum(R) - sum(L - 1);

        cout << result << endl;
    }

    return 0;
}