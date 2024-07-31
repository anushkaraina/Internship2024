#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function for Bubble Sort
void bubblesort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Sorted array using Bubble Sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Function for Selection Sort
void selectionsort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
    cout << "Sorted array using Selection Sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Function for Insertion Sort
void insertionsort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    cout << "Sorted array using Insertion Sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Function for Merge Sort using stable_sort from the Standard Library
void mergesort() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    stable_sort(arr.begin(), arr.end());

    cout << "Sorted array using Merge Sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int choice, x = 1;
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    // Display menu and prompt for user input
    while(x) {
        cout << "Choose a sorting algorithm:" << endl;
        cout << "1. Bubble Sort" << endl;
        cout << "2. Selection Sort" << endl;
        cout << "3. Insertion Sort" << endl;
        cout << "4. Merge Sort" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                bubblesort(arr);
                break;
            case 2:
                selectionsort(arr);
                break;
            case 3:
                insertionsort(arr);
                break;
            case 4:
                mergesort();
                break;
            case 5:
                x = 0;
                break;
            default:
                cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
        }

        if (x) {
            cout << "Do you want to try another sorting algorithm? Enter 1 to continue or 0 to exit: ";
            cin >> x;
            if (x) {
                arr = {38, 27, 43, 3, 9, 82, 10}; // Resetting the array for the next sort
            }
        }
    }

    return 0;
}
