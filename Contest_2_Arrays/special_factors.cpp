#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> specialFactors;

    for (int i = 1; i * i <= N; i++) {
        if (N % i == 0) {

            // Check first factor
            if (i % 10 == 2 || i % 10 == 7) {
                specialFactors.push_back(i);
            }

            // Check paired factor
            int other = N / i;
            if (other != i) {
                if (other % 10 == 2 || other % 10 == 7) {
                    specialFactors.push_back(other);
                }
            }
        }
    }

    if (specialFactors.empty()) {
        cout << -1 << endl;
    } else {
        sort(specialFactors.begin(), specialFactors.end());
        for (int x : specialFactors) {
            cout << x << " ";
        }
    }

    return 0;
}
