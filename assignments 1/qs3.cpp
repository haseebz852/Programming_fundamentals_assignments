#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    // taking input of three integers

    // find and display the largest number
    if (n1 > n2 && n1 > n3)
        cout << "largest number: " << n1  << endl;
    else if (n2 > n1 && n2 > n3)
        cout << "largest number: " << n2  << endl;
    else if (n3 > n2 && n3 > n1)
        cout << "largest number: " << n3 << endl;
    else
        cout << "none of them is largest" << endl;

    // find and display the smallest number
    if (n1 < n2 && n1 < n3)
        cout << "smallest number: " << n1 << endl;
    else if (n2 < n1 && n2 < n3)
        cout << "smallest number: " << n2 << endl;
    else if (n3 < n1 && n3 < n2)
        cout << "smallest number: " << n3 << endl;
    else
        cout << "none of them is smaller" << endl;

    // check if all three values are equal
    if (n1 == n2 && n1 == n3)
        cout << "All numbers are equal." << endl;
    else
        cout << "All three numbers are not equal." << endl;

    return 0;
}
