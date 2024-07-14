#include<iostream>
using namespace std;
int main(){
	int a=10,b=20,x;
	cout << "Initial values of a & b are:" << "\na: " << a <<"\nb: " <<b;
	x=a;
	a=b;
	b=x;
    cout << "\nFinal values of a & b are:" << "\na: " << a <<"\nb: " <<b;
	
}
