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
        cin >> num;
        v.push_back(num);
    }

    int target;
    cout << "Enter the number to count: ";
    cin >> target;

    int count = 0;
    for(int x : v) {
        if(x == target) count++;
    }

    cout << "Number " << target << " occurs " << count << " times." << endl;

    return 0;
}
