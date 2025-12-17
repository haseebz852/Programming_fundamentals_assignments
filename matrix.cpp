#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 3;

    int mat[3][3] = {
        {3, 1, 9},
        {8, 2, 5},
        {4, 7, 6}
    };

    int arr[9];
    int k = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            arr[k] = mat[i][j];
            k++;
        }
    }

    sort(arr, arr + 9);

    k = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            mat[i][j] = arr[k];
            k++;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
