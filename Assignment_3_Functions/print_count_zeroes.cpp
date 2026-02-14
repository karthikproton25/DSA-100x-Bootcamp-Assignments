#include <iostream>
using namespace std;

// Function to count zero digits
int countZeros(long long N) {

    // Special case: if N is 0
    if (N == 0) {
        return 1;
    }

    int count = 0;

    while (N > 0) {
        if (N % 10 == 0) {
            count++;
        }
        N /= 10;
    }

    return count;
}

int main() {
    long long N;
    cin >> N;

    cout << countZeros(N) << endl;

    return 0;
}
