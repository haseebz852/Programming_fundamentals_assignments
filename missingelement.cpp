#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {2, 3, 1, 5};

    int sum1 = 0, sum2 = 0;

    for(int x : v1) sum1 += x;
    for(int x : v2) sum2 += x;

    cout << "Missing element: " << sum1 - sum2 << endl;

    return 0;
}
