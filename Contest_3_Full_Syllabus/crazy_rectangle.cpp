#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int numCount = 0;
    int letCount = 0;
    int index = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (index % 2 == 0) {
                cout << (numCount % 9) + 1;
                numCount++;
            } else {
                cout << (char)('a' + letCount % 26);
                letCount++;
            }
            index++;
        }
        cout << endl;
    }

    return 0;
}
