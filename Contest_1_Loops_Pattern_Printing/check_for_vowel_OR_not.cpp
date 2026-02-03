#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
