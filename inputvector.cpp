#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Enter number of elements: ";
    cin >> N;

    vector<int> v;
    int num;
    for(int i = 0; i < N; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> num;
        v.push_back(num);
    }

    cout << "Your vector: ";
    for(int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
