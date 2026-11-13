//submitting assignments 13/11/2026
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int i = 1;
    while (i <= N) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    }

    return 0;
}

