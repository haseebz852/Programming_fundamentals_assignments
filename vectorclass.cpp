#include <iostream>
using namespace std;

class MyVector {
private:
    int* arr;
    int capacity;
    int length;

public:
    MyVector() {
        capacity = 10;
        length = 0;
        arr = new int[capacity];
    }

    void push_back(int x) {
        if(length == capacity) {
            int* newArr = new int[capacity*2];
            for(int i = 0; i < length; i++) newArr[i] = arr[i];
            delete[] arr;
            arr = newArr;
            capacity *= 2;
        }
        arr[length] = x;
        length++;
    }

    void pop_back() {
        if(length > 0) length--;
    }

    int size() {
        return length;
    }

    int get(int index) {
        if(index >= 0 && index < length) return arr[index];
        return -1; // simple error
    }

    ~MyVector() {
        delete[] arr;
    }
};

int main() {
    MyVector v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector elements: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v.get(i) << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop_back: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v.get(i) << " ";
    }
    cout << endl;

    cout << "Size: " << v.size() << endl;

    return 0;
}
