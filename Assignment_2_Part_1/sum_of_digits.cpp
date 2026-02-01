#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long sum = 0;

    while (N > 0) {
        sum += N % 10;
        N /= 10;
    }

    cout << sum << endl;

    return 0;
}
