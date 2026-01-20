#include <iostream>
using namespace std;
 
int main() {
    int N, M;
    cin >> N;
    cin >> M;
    
    int lastN = N % 10;
    int lastM = M % 10;
    
    cout << lastN + lastM << endl;
    
    return 0;
    
}