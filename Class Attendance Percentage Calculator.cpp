#include<iostream>
using namespace std;
int main(){
	float t_classes,a_classes;
	cout << "Enter Total No. of classes held: "<<endl;
	cin>>t_classes;
	cout << "Enter Total No. of classes attended: "<<endl;
	cin>>a_classes;
	if(a_classes<=t_classes){
    float x= a_classes/t_classes;
	float ptage=x*100.0;
	cout << "Percentage of class attended: " << ptage;
	if(ptage>=75){
		cout << "\nYou're allowed to sit in the exam"<<endl;
	}
	else{
		cout << "\nYou're not allowed to sit in the exam"<<endl;
	}
	}
	else{
		cout << "Wrong Input!!!" << endl;
}
}
