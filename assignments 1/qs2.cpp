#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int sub1, sub2, sub3, sub4, sub5, total;   // subject marks + total
    float percentage;
    string grade;

    // input marks
    cout << "Enter marks of subject1: ";
    cin >> sub1;
    cout << "Enter marks of subject2: ";
    cin >> sub2;
    cout << "Enter marks of subject3: ";
    cin >> sub3;
    cout << "Enter marks of subject4: ";
    cin >> sub4;
    cout << "Enter marks of subject5: ";
    cin >> sub5;

    // check invalid marks
    if (sub1 > 100 || sub2 > 100 || sub3 > 100 || sub4 > 100 || sub5 > 100) {
        cout << "Invalid input";
    } else {
        total = sub1 + sub2 + sub3 + sub4 + sub5;  // total marks
        percentage = total / 5.0;

        // grade conditions shows grade accordinng to percentage
        if (percentage >= 90)
            grade = "A+";
        else if (percentage >= 80)
            grade = "A";
        else if (percentage >= 70)
            grade = "B";
        else if (percentage >= 60)
            grade = "C";
        else if (percentage >= 50)
            grade = "D";
        else
            grade = "Fail";

        // setting for places 
        cout << fixed << showpoint << setprecision(2);
        cout << left << setw(15) << "\nSub1"
             << left << setw(15) << "Sub2"
             << left << setw(15) << "Sub3"
             << left << setw(15) << "Sub4"
             << left << setw(15) << "Sub5" << endl;

        cout << left << setw(15) << sub1
             << left << setw(15) << sub2
             << left << setw(15) << sub3
             << left << setw(15) << sub4
             << left << setw(15) << sub5 << endl;

        cout << left << setw(10) << "Obtained"
             << setw(15) << "Percentage"
             << setw(10) << "Grade" << endl;

        cout << left << setw(10) << total
             << setw(15) << percentage
             << setw(10) << grade << endl;

        //result= pass/fail
        cout << ((percentage >= 50) ? "Pass" : "Fail");
    }

    return 0;
}
