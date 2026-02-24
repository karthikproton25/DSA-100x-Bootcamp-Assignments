#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {

        int rowMin;
        cin >> rowMin;  // first element of the row

        for (int j = 1; j < m; j++) {
            int value;
            cin >> value;

            if (value < rowMin) {
                rowMin = value;
            }
        }

        cout << rowMin << " ";
    }

    return 0;
}
