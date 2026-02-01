#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long reversed = 0;

    // Special case is handled naturally: if N == 0, reversed stays 0
    while (N > 0) {
        reversed = reversed * 10 + (N % 10);
        N /= 10;
    }

    cout << reversed << endl;

    return 0;
}
