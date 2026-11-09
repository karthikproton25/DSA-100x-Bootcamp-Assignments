// submitting assignments - 9/11/2026

#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    cin >> M;

    int lastdigitN, lastdigitM;
    lastdigitN = N % 10;
    lastdigitM = M % 10;

    cout << " Last digit of N plus M is: " << lastdigitN + lastdigitM << endl;

    return 0;
}