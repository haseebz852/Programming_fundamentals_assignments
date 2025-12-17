#include <iostream>
using namespace std;

void displaySeats(int seats[10][10])
{
    cout << "\nBus Seats (0 = Empty, 1 = Reserved)\n\n";
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}

void reserveSeat(int seats[10][10])
{
    int row, col;
    cout << "Enter row number (1-10): ";
    cin >> row;
    cout << "Enter seat number (1-10): ";
    cin >> col;

    if(seats[row-1][col-1] == 0)
    {
        seats[row-1][col-1] = 1;
        cout << "Seat Reserved Successfully\n";
    }
    else
    {
        cout << "Seat already reserved\n";
    }
}

void cancelSeat(int seats[10][10])
{
    int row, col;
    cout << "Enter row number (1-10): ";
    cin >> row;
    cout << "Enter seat number (1-10): ";
    cin >> col;

    if(seats[row-1][col-1] == 1)
    {
        seats[row-1][col-1] = 0;
        cout << "Seat Cancelled Successfully\n";
    }
    else
    {
        cout << "Seat is already empty\n";
    }
}

void countRows(int seats[10][10])
{
    int full = 0;
    int empty = 0;
    int partial = 0;

    for(int i = 0; i < 10; i++)
    {
        int count = 0;
        for(int j = 0; j < 10; j++)
        {
            if(seats[i][j] == 1)
                count++;
        }

        if(count == 10)
            full++;
        else if(count == 0)
            empty++;
        else
            partial++;
    }

    cout << "\nFully occupied rows: " << full << endl;
    cout << "Empty rows: " << empty << endl;
    cout << "Partially occupied rows: " << partial << endl;
}

int main()
{
    int seats[10][10] = {0};
    int choice;

    do
    {
        cout << "\n1. Display Seats";
        cout << "\n2. Reserve a Seat";
        cout << "\n3. Cancel a Seat";
        cout << "\n4. Count Rows";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if(choice == 1)
            displaySeats(seats);
        else if(choice == 2)
            reserveSeat(seats);
        else if(choice == 3)
            cancelSeat(seats);
        else if(choice == 4)
            countRows(seats);

    } while(choice != 5);

    return 0;
}
