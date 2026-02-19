#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long arr[N];
    long long sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << sum << endl;

    return 0;
}
