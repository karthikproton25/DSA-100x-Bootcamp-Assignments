#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int x) {
    if (x <= 1) {
        return false;
    }

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }

    return true;
}

// Function to print primes up to N
void printPrimes(int N) {
    for (int i = 1; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int N;
    cin >> N;

    printPrimes(N);

    return 0;
}
