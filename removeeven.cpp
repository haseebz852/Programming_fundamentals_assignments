#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 15, 20, 25, 30, 35};

    for(int i = 0; i < v.size(); i++) {
        if(v[i] % 2 == 0) {
            v.erase(v.begin() + i);
            i--;
        }
    }

    for(int x : v) cout << x << " ";
    cout << endl;

    return 0;
}
