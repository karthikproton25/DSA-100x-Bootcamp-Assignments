// Submitting assignments 11/11/2026

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Finding minimum
    if (a < b && a < c)
        cout << "Min = " << a << endl;
    else if (b < a && b < c)
        cout << "Min = " << b << endl;
    else
        cout << "Min = " << c << endl;

    // Finding maximum
    if (a > b && a > c)
        cout << "Max = " << a << endl;
    else if (b > a && b > c)
        cout << "Max = " << b << endl;
    else
        cout << "Max = " << c << endl;

    return 0;
}