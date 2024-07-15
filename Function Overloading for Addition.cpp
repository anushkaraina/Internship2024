#include<iostream>
using namespace std;
int add(int n1,int n2){
	cout << "sum of num 1 and num 2 is: "<<endl;
	return n1+n2;
}
int add(int n1,int n2,int n3){
	cout << "sum of num 1, num 2 and num 3 is: "<<endl;
	return n1+n2+n3;
}
int main(){
	int num1,num2,num3;
	cout << "Enter 1st number: ";
	cin >> num1;
	cout << "Enter 2nd number: ";
	cin >> num2;
	cout << "Enter 3rd number: ";
	cin >> num3;
	cout << add(num1,num2)<<endl;
	cout << add(num1,num2,num3);
}
