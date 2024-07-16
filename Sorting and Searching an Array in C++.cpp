#include<iostream>
using namespace std;

void sort_array(int arr[], int size) {
    int i, j, temp;
    for(i = 0; i < size - 1; i++) {
        for(j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Sorted Array:" << endl;
    for(int z = 0; z < size; z++) {
        cout << arr[z] << endl;
    }
}

void search_array(int arr[], int size, int x) {   
    int low = 0, high = size - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == x) {
            cout << "Element found at index " << mid << endl;
            return;
        } else if(arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << "No such element present." << endl;
}

int main() {
    int arr[6] = {44, 5, 67, 12, 89, 45};
    int size = 6;
    int search_element = 89;

    sort_array(arr, size);
    search_array(arr, size, search_element);

    return 0;
}
