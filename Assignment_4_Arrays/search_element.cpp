#include <iostream>
using namespace std;

int main() {
    int N;
    long long X;
    cin >> N >> X;

    bool found = false;

    for (int i = 0; i < N; i++) {
        long long value;
        cin >> value;

        if (value == X) {
            found = true;
        }
    }

    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
