#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 2};
    bool duplicate = false;

    for(int i = 0; i < v.size(); i++) {
        for(int j = i+1; j < v.size(); j++) {
            if(v[i] == v[j]) {
                duplicate = true;
                break;
            }
        }
        if(duplicate) break;
    }

    if(duplicate) cout << "Duplicates found" << endl;
    else cout << "No duplicates" << endl;

    return 0;
}
