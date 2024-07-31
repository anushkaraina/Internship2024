#include<iostream>
using namespace std;
int main(){
    int row,column,sum=0;
    cout << "Enter no of rows:" << endl;
    cin >> row;
    cout << "Enter no of cols:" << endl;
    cin >> column;
    int arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout << "Enter element at position: [" << i << "]" << "[" << j << "]" << endl;
            cin>>arr[i][j];
        }
    }
    cout << "Elements entered successfully!!!" << endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout << "Elements in first row are:" << endl;
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    cout << "Sum of first fow elements:" << endl;
    for(int i=0;i<1;i++){
        for(int j=0;j<column;j++){
            sum=sum+arr[i][j];
        }
    }
    cout << sum;
}
