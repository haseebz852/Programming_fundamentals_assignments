#include <iostream>
using namespace std;

int main() {
    int h, b;
    
    cout << "Enter two numbers: ";
    cin >> h >> b;

    // Swapping using arithmetic operators
    h = h + b;
    b = h - b;
    h = h - b;

    cout << "After swapping:" << endl;
    cout << "h = " << h << endl;
    cout << "b = " << b << endl;
// so the values will be exchanged after swapping
    return 0;
}
