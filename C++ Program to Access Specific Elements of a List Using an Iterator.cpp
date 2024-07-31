#include<iostream>
#include<list>

using namespace std;

int main(){
    // Create the list
    list<int> numbers = {1, 6, 3, 8, 5};

    // Create an iterator to point to the first element of the list
    list<int>::iterator itr = numbers.begin();
    
    // Iterate through the list and display the 2nd and 4th elements
    for(int i = 1; i <= numbers.size(); i++){
        if(i == 2 || i == 4){
            cout << "Element at position " << i << ": " << *itr << endl;
        }
        ++itr;
    }

    return 0;
}
