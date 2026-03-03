#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long diagSum = 0, nonDiagSum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            long long val;
            cin >> val;

            bool mainDiag = (i == j);
            bool secDiag  = (i + j == n - 1);

            if (mainDiag || secDiag) {
                diagSum += val;
            } else {
                nonDiagSum += val;
            }
        }
    }

    cout << diagSum << " " << nonDiagSum << endl;

    return 0;
}