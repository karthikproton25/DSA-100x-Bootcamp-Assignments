#include <iostream>
using namespace std;

int main() {
    int hh, mm;
    char colon;
    cin >> hh >> colon >> mm;

    if (hh == mm) {
        cout << "Mogambo is happy" << endl;
    } else {
        cout << "Mogambo is sad" << endl;
    }

    return 0;
}