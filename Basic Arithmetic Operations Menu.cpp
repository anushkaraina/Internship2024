#include<iostream>
using namespace std;
void add(int a,int b){
	int sum=a+b;
	cout << "The sum of " << a << " and" << " " <<  b<<" is: " << sum<< endl;
}
void subt(int a,int b){
	int diff=a-b;
	cout << "The difference of " << a << " and" << " " <<  b<<" is: " << diff<<endl;
}
void mul(int a,int b){
	int prod=a*b;
	cout << "The product of " << a << " and" << " " <<  b<<" is: " << prod << endl;
}
void div(float a,float b){
	if(b!=0){
		int quot=a/b;
		cout << "The division of " << a << " and" << " " <<  b<<" produces quotient equal to: " << quot << endl;
	}
	else{
		cout << "Error!!\nDivision by zero not possible...\nHence, no remainder !!";
	}
}
void rem(int a,int b){
	int remainder=a%b;
	cout << "The remainder of division of " << a << " by" << " " <<  b<<" is: " << remainder << endl;
}
int main(){
	int n1,n2,choice;
	cout << "Press 1 for Addition\nPress 2 for Subtraction\nPress 3 for Multiplication\nPress 4 for Division\nEnter 5 for remainder\n";
	cin>> choice;
	cout << "Enter 1st number: ";
	cin >> n1;
	cout << "Enter 2nd number: ";
	cin >> n2;
	switch (choice){
		case 1:{
			add(n1,n2);
			break;
		}
		case 2:{
			subt(n1,n2);	
			break;
		}
		case 3:{
			mul(n1,n2);	
			break;
		}
		case 4:{
			div(n1,n2);
			break;
		}
		case 5:{
			rem(n1,n2);
			break;
		}
	}
	
	return 0;
}
