#include<iostream>
using namespace std;
int main(){
	//Braced Initializers
	// Variable may contain random garbage value. WARNING
	int elephant_count;
	int lion_count{};//Initializes to zero
	int dog_count{10}; //Initializes to 10
	int cat_count{15}; //Initializes to 15
	// Can use expression as initializer
	int domesticated_animals {dog_count + cat_count};
	
	//int new_number{doesn't exist};
	int narrowing_conversion {2.9}; //compiler error
	cout << "Elephant count: " << elephant_count << endl;
	cout << "Lion count: " << lion_count << endl;
	cout << "Dog count: " << dog_count << endl;
	cout << "Cat count: " << cat_count << endl;
	cout << "Domesticated animal count: " << domesticated_animals << endl;
}
