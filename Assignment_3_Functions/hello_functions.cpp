#include <iostream>
using namespace std;

// Function definition
void printMessage(int N) {
    for (int i = 1; i <= N; i++) {
        cout << "I am learning functions" << endl;
    }
}

int main() {
    int N;
    cin >> N;

    // Function call
    printMessage(N);

    return 0;
}
