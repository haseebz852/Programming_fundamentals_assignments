#include <iostream>
using namespace std;

void inputSales(int sales[5][7])
{
    for(int i = 0; i < 5; i++)
    {
        cout << "\nProduct " << i + 1 << endl;
        for(int j = 0; j < 7; j++)
        {
            cout << "Enter sales for day " << j + 1 << ": ";
            cin >> sales[i][j];
        }
    }
}

void calculateRevenue(int sales[5][7], int total[5])
{
    for(int i = 0; i < 5; i++)
    {
        total[i] = 0;
        for(int j = 0; j < 7; j++)
        {
            total[i] = total[i] + sales[i][j];
        }
    }
}

void findMaxProduct(int total[5])
{
    int max = total[0];
    int product = 0;

    for(int i = 1; i < 5; i++)
    {
        if(total[i] > max)
        {
            max = total[i];
            product = i;
        }
    }

    cout << "\nProduct with maximum weekly sales: Product " << product + 1 << endl;
}

void findBestDay(int sales[5][7])
{
    int bestDay = 0;
    int maxSales = 0;

    for(int j = 0; j < 7; j++)
    {
        int dayTotal = 0;
        for(int i = 0; i < 5; i++)
        {
            dayTotal = dayTotal + sales[i][j];
        }

        if(j == 0 || dayTotal > maxSales)
        {
            maxSales = dayTotal;
            bestDay = j;
        }
    }

    cout << "Best sales day overall: Day " << bestDay + 1 << endl;
}

int main()
{
    int sales[5][7];
    int weeklyTotal[5];

    inputSales(sales);
    calculateRevenue(sales, weeklyTotal);
    findMaxProduct(weeklyTotal);
    findBestDay(sales);

    return 0;
}
