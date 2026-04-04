#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int arr[100000];
    for (int i = 0; i < n; i++) cin >> arr[i];

    set<int> good;
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        good.insert(x);
    }

    int windowGood = 0;
    for (int i = 0; i < k; i++)
        if (good.count(arr[i])) windowGood++;

    cout << windowGood;

    for (int i = k; i < n; i++) {
        if (good.count(arr[i]))     windowGood++;
        if (good.count(arr[i - k])) windowGood--;
        cout << " " << windowGood;
    }

    cout << "\n";
    return 0;
}