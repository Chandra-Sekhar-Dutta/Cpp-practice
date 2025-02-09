#include<iostream>
#include <vector>

using namespace std;

template<typename T>
void printVector(vector<T> v) {
    for (int i=0;i<=4;i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> intVector {1, 2, 3, 4, 5};
    vector<double> doubleVector {1.1, 2.2, 3.3, 4.4, 5.5};

    cout << "Int vector: ";
    printVector(intVector);

    cout << "Double vector: ";
    printVector(doubleVector);

    return 0;
}

