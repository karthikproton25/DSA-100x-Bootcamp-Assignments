#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long original = N;
    long long reversed = 0;

    while (N > 0) {
        reversed = reversed * 10 + (N % 10);
        N /= 10;
    }

    if (original == reversed) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
