#include <iostream>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    int secondLast = (N / 10) % 10;
    cout << secondLast << endl;
 
    return 0;
}