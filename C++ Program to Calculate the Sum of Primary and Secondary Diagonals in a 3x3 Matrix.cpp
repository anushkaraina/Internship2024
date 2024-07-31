#include<iostream>
using namespace std;
int main(){
    int sum=0,sum1=0;
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << "Enter element at position: [" << i << "]" << "[" << j << "]" << endl;
            cin>>arr[i][j];
        }
    }
    cout << "Elements entered successfully!!!" << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i+j==2){
                sum=sum+arr[i][j];
            }
        }
    }
    cout << "Sum of secondary diagonal = " << sum << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                sum1=sum1+arr[i][j];
            }
        }
    }
    cout << "Sum of primary diagonal = " << sum1;
}
