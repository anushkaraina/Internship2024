#include<iostream>
#include<array>

using namespace std;

int main() {
    array<int, 4> a = {3, 4, 7, 2};
    int size = a.size();

    cout << "Size of array: " << size << endl;

    for (int i = 0; i < size; i++) {
        cout << a[i] << endl;
    }

    cout << "Array not empty check: " << (a.empty() ? "Empty" : "Not Empty") << endl;
    cout << "Max size of array: " << a.max_size() << endl;
    cout << "Array data pointer: " << a.data() << endl;

    cout << "Element at index 3: " << a.at(3) << endl;

    bool trueFalse = a.empty();
    cout << "True or False: " << trueFalse << endl;

    cout << "Is array empty or not? " << (a.empty() ? "Yes" : "No") << endl;

    cout << "First element: " << a.front() << endl;
    cout << "Last element: " << a.back() << endl;

    return 0;
}
