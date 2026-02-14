#include <iostream>
using namespace std;

// Function to compute HCF (GCD)
int gcd(int A, int B) {
    while (B != 0) {
        int remainder = A % B;
        A = B;
        B = remainder;
    }
    return A;
}

int main() {
    int A, B;
    cin >> A >> B;

    cout << gcd(A, B) << endl;

    return 0;
}
