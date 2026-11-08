// Submitting assignments - 8/11/2026
#include <iostream>
using namespace std;
 
int main() {
    double l, b;
 
    //Taking input length
    cout << "Enter the length l: ";
    cin >> l;
 
    //Taking input breadth
    cout << "Enter the breadth b: ";
    cin >> b;

    //Calculating area and perimeter
    double area = l * b;
    double perimeter = 2*(l + b);
 
    //results
    cout << "Area of rectangle: " << area << endl;
    cout << "Perimeter of rectangle: " << perimeter << endl;
 
    return 0;
}