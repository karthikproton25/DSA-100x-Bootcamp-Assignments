#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;

        int n = S.length();

        int count = 1;

        for (int i = 1; i <= n; i++) {

            if (i < n && S[i] == S[i - 1]) {
                count++;
            } else {
                cout << S[i - 1];

                if (count > 1) {
                    cout << count;
                }

                count = 1;
            }
        }

        cout << endl;
    }

    return 0;
}