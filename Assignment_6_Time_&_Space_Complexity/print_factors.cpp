#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> factors;

    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i != n / i) {
                factors.push_back(n / i);
            }
        }
    }

    sort(factors.begin(), factors.end());

    for (int i = 0; i < factors.size(); i++) {
        cout << factors[i];
        if (i < factors.size() - 1) cout << " ";
    }
    cout << endl;

    return 0;
}