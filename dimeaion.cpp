#include <iostream>
using namespace std;

int main() {

    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    
    for(int col = 3; col >= 0; col--) {

        // row loop (upar se neeche)
        for(int row = 0; row < 4; row++) {
            cout << arr[row][col] << " ";
        }

        cout << endl;
    }

    return 0;
}
