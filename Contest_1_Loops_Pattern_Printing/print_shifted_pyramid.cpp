#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {

        // Leading spaces
        for (int s = 1; s <= i - 1; s++) {
            cout << " ";
        }

        // x characters
        for (int j = 1; j <= i; j++) {
            cout << "x";
        }

        cout << endl;
    }

    return 0;
}
