#include<iostream>
#include<list>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //create a list
    list<int> numbers {1,2,1,3,4,1};
    //display the original list
    cout << "Initial List: ";
    for(int number : numbers){
        cout << number << ", ";
    }
    // remove all the elements with value 1
    numbers.remove(1);

    //display the final list
    cout << "Final List: ";
    for(int number : numbers){
        cout << number << ", ";
    }
     
    // list<int> nums={2,4,6,8,10};
    // if(nums.empty()){
    //     cout << "Enter the element you want to enter: " << endl;
    //     int item;
    //     cin>> item;
    //     nums.push_front(item);
    // }
    // else{
    //     cout << "Enter the element you want to enter: " << endl;
    //     int item;
    //     cin>> item;
    //     cout << "Enter the position where you want to enter: " << endl;
    //     //int pos;
    //     //cin>> pos;
    //     list<int>::iterator itr =nums.begin();
    //     for(*itr=1;*itr<=4;++*itr);
    //     nums.insert(itr,item);
    //     cout << "Element entered successfully" << endl;
    // }
    // for(int i : nums){
    //     cout << i << " " ;
    // }
}
