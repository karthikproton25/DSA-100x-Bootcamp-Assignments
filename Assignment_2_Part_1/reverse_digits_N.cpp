//submitting assignments 23/11/2026
#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;
    long long reversed = 0;
    while (N > 0) {
        int digit = N % 10;
        reversed = reversed * 10 + digit;
        N /= 10;
    }

    cout << reversed << endl;
    return 0;
}
