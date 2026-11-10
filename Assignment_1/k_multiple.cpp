
// submitting assignments - 10/11/2026

#include <iostream>
using namespace std;
 
int main() {
    long long N, M;
    cin >> N >> M;
 
    if (M % N == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
 
    return 0;
}