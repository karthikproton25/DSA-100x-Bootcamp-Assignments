#include <iostream>
using namespace std;

int main() {
    int Y;
    cin >> Y;

    if (Y % 100 == 0) {
        // If divisible by 100, must also be divisible by 400
        if (Y % 400 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        // If not divisible by 100, check divisibility by 4
        if (Y % 4 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
