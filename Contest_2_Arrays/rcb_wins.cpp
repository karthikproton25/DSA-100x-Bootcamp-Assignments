#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long arr[100000];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int left = N / 2 - 1;
    int right = N / 2;

    while (left >= 0 && right < N) {
        cout << arr[left] << " " << arr[right] << " ";
        left--;
        right++;
    }

    return 0;
}
