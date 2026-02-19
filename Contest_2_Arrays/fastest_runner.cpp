#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long minTime = 1e18;
    int fastestID = -1;

    for (int i = 1; i <= N; i++) {
        long long time;
        cin >> time;

        if (time < minTime) {
            minTime = time;
            fastestID = i;
        }
        else if (time == minTime) {
            fastestID = i;  // choose larger ID
        }
    }

    cout << fastestID << endl;

    return 0;
}
