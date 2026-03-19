#include <iostream>
using namespace std;

int digitSum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int N, Q, K;
    cin >> N >> Q >> K;

    int A[100001];
    int prefix[100001];

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    prefix[0] = 0;

    // Build prefix array
    for (int i = 1; i <= N; i++) {
        if (digitSum(A[i]) == K) {
            prefix[i] = prefix[i - 1] + 1;
        } else {
            prefix[i] = prefix[i - 1];
        }
    }

    // Process queries
    while (Q--) {
        int L, R;
        cin >> L >> R;

        cout << prefix[R] - prefix[L - 1] << endl;
    }

    return 0;
}