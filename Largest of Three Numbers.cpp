#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	cout << "Enter 1st number: " << endl;
	cin >> n1;
	cout << "Enter 2nd number: " << endl;
	cin >> n2;
	cout << "Enter 3rd number: " << endl;
	cin >> n3;
	if(n1>=n2){
		if(n1>=n3){
			cout << "1st number is the largest.\n";
		}
		else{
   			cout << "3rd number is the largest.\n";
		}
	}
	else if(n2>n1){
		if(n2>n3){
			cout << "2nd number is the largest.\n";
		}
		else{
			cout << "3rd number is the largest.\n";
		}
	}
}
