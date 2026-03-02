#include <iostream>
using namespace std;

int main() {
    string N;
    cin >> N;

    long long sum = 0;

    for (char ch : N) {
        sum += (ch - '0');
    }

    cout << sum << endl;

    return 0;
}