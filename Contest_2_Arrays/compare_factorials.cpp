#include <iostream>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;

    if (A == B) {
        cout << "Yes" << endl;
    }
    else if ((A == 0 && B == 1) || (A == 1 && B == 0)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
