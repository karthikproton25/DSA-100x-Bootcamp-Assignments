#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> a;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.insert(x);
    }

    set<int> result;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        if (a.count(x)) result.insert(x);
    }

    cout << result.size() << "\n";
    for (int x : result) cout << x << " ";
    cout << "\n";

    return 0;
}