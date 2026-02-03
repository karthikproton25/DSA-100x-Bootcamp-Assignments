#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;

    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;

        if ((x != 0 && 18 % x == 0) || (x % 45 == 0)) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
