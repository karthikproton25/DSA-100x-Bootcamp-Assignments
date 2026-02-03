#include <iostream>
using namespace std;
 
int main() {
    int N,M;
    cin >> N >> M;
 
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (i == 1 or i == N or j == 1 or j == M) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
 
    return 0;
}