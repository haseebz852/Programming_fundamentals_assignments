#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> &v) {
    int start = 0, end = v.size() - 1;
    while(start < end) {
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }
}

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    cout << "Original vector: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    reverseVector(v);

    cout << "Reversed vector: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    return 0;
}
