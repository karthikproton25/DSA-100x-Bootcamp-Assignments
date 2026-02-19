#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long first;
    cin >> first;

    bool beautiful = true;

    for (int i = 1; i < N; i++) {
        long long x;
        cin >> x;

        if (x != first) {
            beautiful = false;
        }
    }

    if (beautiful)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
