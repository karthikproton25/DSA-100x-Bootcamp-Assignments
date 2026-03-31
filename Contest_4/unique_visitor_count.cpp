#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> seen;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        seen.insert(val);
        if (i > 0) cout << " ";
        cout << seen.size();
    }

    cout << endl;
    return 0;
}