#include <iostream>
using namespace std;

long long countDivisors(long long n) {
    long long count = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            if (i != n / i) count++;
        }
    }
    return count;
}

int main() {
    long long a, b;
    cin >> a >> b;

    long long da = countDivisors(a);
    long long db = countDivisors(b);

    if (da > db) cout << "A" << endl;
    else if (db > da) cout << "B" << endl;
    else cout << "DRAW" << endl;

    return 0;
}