#include <iostream>
using namespace std;

int main() {
    int n, m;
    long long x;
    cin >> n >> m >> x;

    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long value;
            cin >> value;

            if (value == x) {
                found = true;
            }
        }
    }

    if (found)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
