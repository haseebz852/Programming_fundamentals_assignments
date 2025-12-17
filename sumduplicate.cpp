#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 5, 7, -1, 5};
    int target = 6;
    int count = 0;

    for(int i = 0; i < v.size(); i++) {
        for(int j = i+1; j < v.size(); j++) {
            if(v[i] + v[j] == target) count++;
        }
    }

    cout << "Number of pairs with sum " << target << ": " << count << endl;

    return 0;
}
