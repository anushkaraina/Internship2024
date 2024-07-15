#include<iostream>
using namespace std;
int main(){
	int array[5]={10,20,30,40,50};
	int sum=0;
	for(int i=0;i<5;i++)
	    sum+=array[i];
	cout << "Sum is " << sum << endl;
	
	int max = -32678;
	for(int i=0;i<5;i++){
		if(array[i]>max) // use if(arr[i]<min) then min = temp with min = INT64_MAX initiall for min
		{
			max = array[i];
		}
	}
	cout << max << endl;
	
	int user_input;
	cout << "Enter the no you want to search for in the array: ";
	cin >> user_input;
	int counter = 0;
	for(int i=0; i<5;i++){
		if(array[i]==user_input)
		{
			cout << "Number " << user_input << " is found at the location : " << counter;
			exit(0);
		}
		counter++;
	}
	cout << "Not Found!";
	return 0;
}
