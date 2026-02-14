#include <iostream>
using namespace std;

// Function to compute factorial
long long factorial(int x) {
    long long result = 1;
    for (int i = 1; i <= x; i++) {
        result *= i;
    }
    return result;
}

// Function to compute nCr
long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    cin >> n >> r;

    cout << nCr(n, r) << endl;

    return 0;
}
