// Selection Sort
#include<iostream>
using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void selectionSort(int arr[], int len) { 
	for (int i = 0; i < len - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < len; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		swap(arr[i], arr[minIndex]);
	}

	cout << "Sorted Final array:" << endl;
	for (int k = 0; k < len; k++) {
		cout << arr[k] << " ";
	}
	cout << endl;
}

int main() {
	int size;
	cout << "Enter size of array:" << endl;
	cin >> size;
	int array[size];
	cout << "Enter the elements in the array:" << endl;
	for (int i = 0; i < size; i++) {
		cin >> array[i];
	}
	cout << "Elements entered successfully" << endl;
	selectionSort(array, size);
}
