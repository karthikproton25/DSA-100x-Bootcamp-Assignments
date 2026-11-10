// submitting assignments - 10/11/2026
#include <iostream>
using namespace std;
 
int main() {
    long long N, F;
    cin >> N >> F;
 
    if (N % F == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
 
    return 0;
}