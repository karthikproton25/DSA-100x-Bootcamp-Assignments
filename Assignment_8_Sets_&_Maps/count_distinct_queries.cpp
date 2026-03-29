#include <iostream>
#include <set>
using namespace std;

int main() {
    int q;
    cin >> q;

    set<int> s;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int x; cin >> x;
            s.insert(x);
        } else if (type == 2) {
            int x; cin >> x;
            s.erase(x);
        } else if (type == 3) {
            cout << s.size() << "\n";
        } else {
            int x; cin >> x;
            if (s.count(x)) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}