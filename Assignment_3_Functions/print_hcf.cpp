#include <iostream>
using namespace std;

int gcd(int A, int B) {
    int result = 1;

    for (int i = 1; i <= min(A, B); i++) {
        if (A % i == 0 && B % i == 0) {
            result = i;
        }
    }

    return result;
}

int main() {
    int A, B;
    cin >> A >> B;

    cout << gcd(A, B) << endl;

    return 0;
}
