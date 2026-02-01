#include <iostream>
using namespace std;
 
int main() {
    double l, b;
 
    // Ask for input
    cout << "Enter the length l: ";
    cin >> l;
 
    cout << "Enter the breadth b: ";
    cin >> b;
 
    // Calculate area and perimeter
    double area = l * b;
    double perimeter = 2 * (l + b);
 
    // Output results
    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;
 
    return 0;
}