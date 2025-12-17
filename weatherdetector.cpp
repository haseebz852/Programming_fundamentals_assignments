#include <iostream>
using namespace std;

void inputData(float temp[7][4])
{
    for(int i = 0; i < 7; i++)
    {
        cout << "\nDay " << i + 1 << endl;
        for(int j = 0; j < 4; j++)
        {
            cout << "Enter temperature: ";
            cin >> temp[i][j];
        }
    }
}

void findHighLow(float temp[7][4])
{
    float high = temp[0][0];
    float low = temp[0][0];

    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(temp[i][j] > high)
            {
                high = temp[i][j];
            }

            if(temp[i][j] < low)
            {
                low = temp[i][j];
            }
        }
    }

    cout << "\nHighest temperature: " << high << endl;
    cout << "Lowest temperature: " << low << endl;
}

void dailyAverage(float temp[7][4], float avg[7])
{
    for(int i = 0; i < 7; i++)
    {
        float sum = 0;
        for(int j = 0; j < 4; j++)
        {
            sum = sum + temp[i][j];
        }
        avg[i] = sum / 4;
    }
}

void display(float temp[7][4], float avg[7])
{
    cout << "\nDay\tT1\tT2\tT3\tT4\tAvg\n";

    for(int i = 0; i < 7; i++)
    {
        cout << i + 1 << "\t";
        for(int j = 0; j < 4; j++)
        {
            cout << temp[i][j] << "\t";
        }
        cout << avg[i] << endl;
    }
}

int main()
{
    float temperature[7][4];
    float average[7];

    inputData(temperature);
    findHighLow(temperature);
    dailyAverage(temperature, average);
    display(temperature, average);

    return 0;
}
