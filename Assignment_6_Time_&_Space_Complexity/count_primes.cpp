#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    bool sieve[100001];
    for (int i = 0; i <= n; i++) sieve[i] = true;
 
    sieve[0] = sieve[1] = false;
 
    for (int i = 2; i * i <= n; i++) {
        if (sieve[i]) {
            for (int j = i * i; j <= n; j += i) {
                sieve[j] = false;
            }
        }
    }
 
    int count = 0;
    for (int i = 2; i <= n; i++) {
        if (sieve[i]) count++;
    }
 
    cout << count << endl;
    return 0;
}