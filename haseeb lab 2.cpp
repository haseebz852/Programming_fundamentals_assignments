#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string correctPassword = "python123";
    string password;

    while (true) 
{
        cout << "Enter your password: ";
        cin >> password;

        if (password == correctPassword) 
{
            cout << "Your password is correct!" << endl;
            break; 
} else 
{
            cout << "Incorrect password. Please try again." << endl;
}
}

    cout << "Access granted!" << endl;
    return 0;
}
