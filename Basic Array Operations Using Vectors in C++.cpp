#include<iostream>
#include<vector>
using namespace std;

int main() {
    int choice, n;
    vector<int> arr;

    cout << "Enter size of array:\n";
    cin >> n;
    arr.resize(n);

    while (true) {
        cout << "Enter 1 for inserting elements in the array" << endl;
        cout << "Enter 2 for deleting elements from the array" << endl;
        cout << "Enter 3 for updating elements in the array" << endl;
        cout << "Enter 4 for selecting elements in the array" << endl;
        cout << "Enter 0 to exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter the elements of array:" << endl;
                for (int i = 0; i < n; ++i) {
                    cin >> arr[i];
                }
                cout << "Elements entered successfully.\n";
                break;
            }
            case 2: {
                cout << "Enter the position from which you want to delete an element (0-based index):\n";
                int pos;
                cin >> pos;
                if (pos >= 0 && pos < arr.size()) {
                    arr.erase(arr.begin() + pos);
                    cout << "Element at position " << pos << " deleted.\n";
                } else {
                    cout << "Invalid position.\n";
                }
                break;
            }
            case 3: {
                cout << "Enter the position at which you want to update an element :\n";
                int pos, item;
                cin >> pos;
                if (pos >= 1 && pos <= arr.size()) {
                    cout << "Enter the new element:\n";
                    cin >> item;
                    arr[pos-1] = item;
                    cout << "Element updated successfully.\n";
                } else {
                    cout << "Invalid position.\n";
                }
                break;
            }
            case 4: {
                cout << "Elements in the array are:\n";
                for (int i = 0; i < arr.size(); ++i) {
                    cout << arr[i] << " ";
                }
                cout << "\n";
                break;
            }
            case 0: {
                return 0;
            }
            default: {
                cout << "Invalid choice. Please enter a valid option.\n";
            }
        }
    }

    return 0;
}

