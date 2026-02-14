#include <iostream>
using namespace std;

// Function to print factors
void printFactors(int N) {
    for( int i = N; i>=1; i--) {
        if (N % i == 0) {
            cout << i << " ";
        }
    }
}

int main() {
    int N;
    cin >> N;

    printFactors(N);

    return 0;
}
