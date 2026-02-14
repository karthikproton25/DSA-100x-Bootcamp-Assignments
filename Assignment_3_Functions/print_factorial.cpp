#include <iostream>
using namespace std;

// Function that returns factorial
long long factorial(int N) {
    long long result = 1;

    for (int i = 1; i <= N; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int N;
    cin >> N;

    cout << factorial(N) << endl;

    return 0;
}
