#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxStreak = 1, curStreak = 1;
    int prev;
    cin >> prev;

    for (int i = 1; i < n; i++) {
        int val;
        cin >> val;
        if (val == prev) {
            curStreak++;
            if (curStreak > maxStreak) maxStreak = curStreak;
        } else {
            curStreak = 1;
        }
        prev = val;
    }

    cout << maxStreak << endl;
    return 0;
}