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

    int max_val = v[0];
    int min_val = v[0];

    for(int x : v) {
        if(x > max_val) max_val = x;
        if(x < min_val) min_val = x;
    }

    cout << "Maximum: " << max_val << endl;
    cout << "Minimum: " << min_val << endl;

    return 0;
}
