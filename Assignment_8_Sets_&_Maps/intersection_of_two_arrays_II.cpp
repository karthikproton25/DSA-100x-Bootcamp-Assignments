#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    map<int, int> freqA;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        freqA[x]++;
    }

    map<int, int> freqB;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        freqB[x]++;
    }

    vector<int> result;
    for (auto& p : freqA) {
        int val = p.first;
        if (freqB.count(val)) {
            int times = min(freqA[val], freqB[val]);
            for (int i = 0; i < times; i++)
                result.push_back(val);
        }
    }

    sort(result.begin(), result.end());

    cout << result.size() << "\n";
    for (int x : result) cout << x << " ";
    cout << "\n";

    return 0;
}