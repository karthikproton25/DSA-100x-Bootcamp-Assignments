#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[100000];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int P;
    cin >> P;

    int passCount = 0;
    int failCount = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] >= P) {
            passCount++;
        } else {
            failCount++;
        }
    }

    cout << "Pass: " << passCount << endl;
    cout << "Fail: " << failCount << endl;

    return 0;
}
