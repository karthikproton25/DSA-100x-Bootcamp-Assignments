#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int countA = 0, countB = 0;

    for (char ch : s) {
        if (ch == 'a')
            countA++;
        else
            countB++;
    }

    if (countA == countB)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}