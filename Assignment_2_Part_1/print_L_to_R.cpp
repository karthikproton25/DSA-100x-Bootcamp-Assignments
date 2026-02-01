#include <iostream>
using namespace std;


int main() {
    int L, R;
    cin >> L >> R;

    int i = L;
    while (i <= R) {
        cout << i;
        if (i != R) {
            cout << " ";
        }
        i++;
    }

    return 0;
}