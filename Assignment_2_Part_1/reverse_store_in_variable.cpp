#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long reversed = 0;

    while (N > 0) {
        reversed = reversed * 10 + (N % 10);
        N /= 10;
    }

    cout << reversed << endl;

    return 0;
}
